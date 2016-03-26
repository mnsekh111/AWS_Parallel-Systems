

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Reducer;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;
import org.apache.hadoop.util.GenericOptionsParser;

import java.io.IOException;
import java.util.*;

public class TopN {

    //This static variable stores the value of N
    public static int N=10; // Default 
    
    public static void main(String[] args) throws Exception {
        
         
           
        Configuration conf = new Configuration();                                                                         
        String[] otherArgs = new GenericOptionsParser(conf, args).getRemainingArgs();                                     
        if (otherArgs.length != 3) {                                                                                      
            System.err.println("Usage: TopWord <in> <out> <N>");                                                          
            System.exit(3);
            
            //Third argument specifies the value of N
            TopN.N=Integer.parseInt(otherArgs[2]);                                                                        
        }                                                                                                                 
                                                                                                                          
        /************** Add your code below****************/

        Job job = Job.getInstance(conf);
        job.setJarByClass(TopN.class);
        job.setMapperClass(TopNMapper.class);
        job.setCombinerClass(TopNReducer.class);
        job.setReducerClass(TopNReducer.class);
        job.setOutputKeyClass(Text.class);
        job.setOutputValueClass(IntWritable.class);

        FileInputFormat.addInputPath(job, new Path(otherArgs[0]));
        FileOutputFormat.setOutputPath(job, new Path(otherArgs[1]));

        System.exit(job.waitForCompletion(true) ? 0 : 1);
        
        
    }

    /**
            The mapper is responsible for reading a line of text and mapping the words 
            in the line to the value 1
    */
    public static class TopNMapper extends Mapper<Object, Text, Text, IntWritable> {

        private final static IntWritable one = new IntWritable(1);
        private Text word = new Text();
     

        @Override
        public void map(Object key, Text value, Context context) throws IOException, InterruptedException {
                StringTokenizer itr = new StringTokenizer(value.toString());
                while (itr.hasMoreTokens()) {
                        word.set(itr.nextToken());
                        context.write(word, one);
                }
        }
    }


    /**
        The reducer gets the intermediate map produced by the mapper and increments the value associated 
        (frequency) with words based on the occurance of the word 
    */
    
    public static class TopNReducer extends Reducer<Text, IntWritable, Text, IntWritable> {

        /* Temporary map data structure to store the key value pairs produced this reducer
        */
        private Map<Text, IntWritable> map = new HashMap<>();

        @Override
        public void reduce(Text key, Iterable<IntWritable> values, Context context) throws IOException, InterruptedException {

            // computes the number of occurrences of a single word
            int sum = 0;
            for (IntWritable val : values) {
                sum += val.get();
            }

            /*Instead of writing to the file, we are storing the map entries into the map data structure
            for future processing (finding TopN in this case. Can be any function on the data emitted by the reducers)*/
            
            map.put(new Text(key), new IntWritable(sum));
        }

        
        /* This method is Called once at the end of the task. It aggregates the o/p produced by
        the reducer and writes only the top N words.
        */
        @Override
        protected void cleanup(Context context) throws IOException, InterruptedException {

            Map<Text, IntWritable> sortedMap = sortByValueUtil(map);

            int counter = 0;
            for (Text key : sortedMap.keySet()) {
                if (counter++ == TopN.N) {
                    break;
                }
                context.write(key, sortedMap.get(key));
            }
        }
    }


    /*
        Original word count Reducer
    */
    public static class TopNReducerOrig extends Reducer<Text, IntWritable, Text, IntWritable> {

        @Override
        public void reduce(Text key, Iterable<IntWritable> values, Context context) throws IOException, InterruptedException {

            // computes the number of occurrences of a single word
            int sum = 0;
            for (IntWritable val : values) {
                sum += val.get();
            }
            context.write(key, new IntWritable(sum));
        }
    }


    /**
    This utility function takes in a Map and sorts it according to value.
    reference : http://stackoverflow.com/questions/109383/sort-a-mapkey-value-by-values-java
    */
    private static <K extends Comparable, V extends Comparable> Map<K, V> sortByValueUtil(Map<K, V> map) {
        List<Map.Entry<K, V>> entries = new LinkedList<Map.Entry<K, V>>(map.entrySet());

        Collections.sort(entries, new Comparator<Map.Entry<K, V>>() {

            @Override
            public int compare(Map.Entry<K, V> o1, Map.Entry<K, V> o2) {
                return o2.getValue().compareTo(o1.getValue());
            }
        });


        Map<K, V> result = new LinkedHashMap<K, V>();

        for (Map.Entry<K, V> entry : entries) {
            result.put(entry.getKey(), entry.getValue());
        }

        return result;
    }

}
