rm -rf TopN.jar TopN*.class
hadoop com.sun.tools.javac.Main TopN.java
jar cf TopN.jar TopN*.class
hdfs dfs -rm -r /user/topnwordcount
hadoop jar ~/TopN.jar TopN /user/shakespeare/t8.shakespeare.txt /user/topnwordcount/output 10

