Producer-Consumer with Anonymous Pipe:
- The parent process acts as the producer. It writes data into the pipe.  
- The child process acts as the consumer. It reads the data from the pipe.  
- The pipe is the medium for communication between parent and child.  

Example: ls -l | grep ".c"
- The program works like the shell command `ls -l | grep ".c"`.  
- Steps involved:
  - fork() → creates the child process.  
  - pipe() → sets up communication channel.  
  - dup2() → redirects input/output to the pipe.  
  - exec() → runs the actual commands.  


