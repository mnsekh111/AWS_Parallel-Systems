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

    public static void main(String[] args) throws Exception {
        Configuration conf = new Configuration();
        String[] otherArgs = new GenericOptionsParser(conf, args).getRemainingArgs();
        if (otherArgs.length != 3) {
            System.err.println("Usage: TopWord <in> <out> <N>");
            System.exit(3);
        }

        /************** Add your code below****************/

    }

    public static class TopNMapper extends Mapper<Object, Text, Text, IntWritable> {

        /************** Add your mapper code below****************/
    }

    public static class TopNReducer extends Reducer<Text, IntWritable, Text, IntWritable> {

        /************** Add your reducer code below****************/
    }


}
