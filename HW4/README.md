Setting up AWS
----------------------------------
Spinning Up a Free Hadoop Cluster: Step by Step
http://insightdataengineering.com/blog/hadoopdevops/


Running the Sample word count Jar
-----------------------------------
Add the following command to ~/.profile <br>
export HADOOP_CLASSPATH=/usr/lib/jvm/java-7-openjdk-amd64/lib/tools.jar <br>
Create the following directories in hdfs: <br>
hdfs dfs -mkdir -p /user/wordcount/ <br>
hdfs dfs -mkdir -p /user/shakespeare/ <br>
List a certain directory in hdfs: <br>
hdfs dfs -ls /user/ <br>
Download Shakespeare's book: <br>
wget http://ocw.mit.edu/ans7870/6/6.006/s08/lecturenotes/files/t8.shakespeare.txt
copy the downloaded book to hdfs:<br>
hdfs dfs -copyFromLocal t8.shakespeare.txt /user/shakespeare
Run the following command:<br>
hadoop jar /usr/local/hadoop/share/hadoop/mapreduce/hadoop-mapreduce-examples-2.7.1.jar wordcount /user/shakespeare/t8.shakespeare.txt /user/wordcount/output
Output:<br>
hdfs dfs -cat /user/wordcount/output/part-r-00000


To compile your java code, assuming you followed the aforementioned configuration, use: hadoop com.sun.tools.javac.Main TopN.java
To create a JAR file use: jar cf TopN.jar TopN*.class

