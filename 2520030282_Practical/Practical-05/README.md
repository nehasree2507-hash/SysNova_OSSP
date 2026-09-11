Producer-Consumer with Anonymous Pipe:
1.The parent process acts as the producer. It writes data into the pipe.  
2.The child process acts as the consumer. It reads the data from the pipe.  
3.The pipe is the medium for communication between parent and child.  

Example: ls -l | grep ".c"
1.The program works like the shell command ls -l | grep ".c".  
Steps involved:
1.fork() → creates the child process.  
2.pipe() → sets up communication channel.  
3.dup2() → redirects input/output to the pipe.  
4.exec() → runs the actual commands.  


