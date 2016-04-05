

Running the Sample word count Jar
-----------------------------------
Add the following command to ~/.profile <br>
export HADOOP_CLASSPATH=/usr/lib/jvm/java-7-openjdk-amd64/lib/tools.jar <br>
<b>Create the following directories in hdfs:</b> <br>
hdfs dfs -mkdir -p /user/wordcount/ <br>
hdfs dfs -mkdir -p /user/shakespeare/ <br>
<b>List a certain directory in hdfs:</b> <br>
hdfs dfs -ls /user/ <br>
<b>Download Shakespeare's book: </b><br>
wget http://ocw.mit.edu/ans7870/6/6.006/s08/lecturenotes/files/t8.shakespeare.txt<br>
<b>copy the downloaded book to hdfs:</b><br>
hdfs dfs -copyFromLocal t8.shakespeare.txt /user/shakespeare <br>
<b>Run the following command:</b><br>
hadoop jar /usr/local/hadoop/share/hadoop/mapreduce/hadoop-mapreduce-examples-2.7.1.jar wordcount<br> /user/shakespeare/t8.shakespeare.txt /user/wordcount/output<br>
<b>Output:</b><br>
hdfs dfs -cat /user/wordcount/output/part-r-00000<br><hr>


To compile your java code, assuming you followed the aforementioned configuration, use: hadoop com.sun.tools.javac.Main TopN.java
To create a JAR file use: jar cf TopN.jar TopN*.class

