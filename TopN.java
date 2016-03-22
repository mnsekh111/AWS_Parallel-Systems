
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

    public static int N=10; // Default
    public static void main(String[] args) throws Exception {
        Configuration conf = new Configuration();
        String[] otherArgs = new GenericOptionsParser(conf, args).getRemainingArgs();
        if (otherArgs.length != 3) {
            System.err.println("Usage: TopWord <in> <out> <N>");
            System.exit(3);
            TopN.N=Integer.parseInt(otherArgs[2]);
        }

        /************** Add your code below****************/

        Job job = Job.getInstance(conf, "word count top N");
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

    public static class TopNMapper extends Mapper<Object, Text, Text, IntWritable> {

        /************** Add your mapper code below****************/
        private final static IntWritable one = new IntWritable(1);
        private Text word = new Text();

         @Override
         public void map(Object key, Text value, Context context) throws 
                IOException, InterruptedException {
      
                StringTokenizer itr = new StringTokenizer(value.toString());
                while (itr.hasMoreTokens()) {
                        word.set(itr.nextToken());
                        context.write(word, one);
                }
        }

    }

    public static class TopNReducer extends Reducer<Text, IntWritable, Text, IntWritable> {

        /************** Add your reducer code below****************/

        private Map<Text,IntWritable> countMap = new HashMap<>();
        @Override
        public void reduce(Text key, Iterable<IntWritable> values, Context context) throws
                IOException, InterruptedException {

                int sum = 0;
                for (IntWritable val : values) {
                        sum += val.get();
                }
                
                countMap.put(key,new IntWritable(sum));

        }

        @Override
        protected void cleanup (Context context) throws IOException,InterruptedException{
                
                Set<Map.Entry<Text,IntWritable>> set = countMap.entrySet();
                List<Map.Entry<Text, IntWritable>> list = new ArrayList<Map.Entry<Text,IntWritable>>(set);
                Collections.sort(list , new Comparator<Map.Entry<Text, IntWritable>>(){
                    public int compare (Map.Entry<Text,IntWritable> o1, Map.Entry<Text,IntWritable> o2) {
                        return (o2.getValue()).compareTo (o1.getValue());
                    }
                });

                int counter = 0;

                for(Map.Entry<Text,IntWritable> entry : list){
                    if(counter == TopN.N-1)
                        break;
                    context.write(entry.getKey(),entry.getValue());
                    counter++;
                }
        }

    }

   // hadoop jar ~/TopN.jar TopN /user/shakespeare/t8.shakespeare.txt /user/wordcount/topnoutput


}
