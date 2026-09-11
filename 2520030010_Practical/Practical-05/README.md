Producer-Consumer using Anonymous Pipe

The parent process produces the data and writes it into the pipe.

The child process reads the data from the pipe.

The pipe is used for communication between the parent and child processes.

ls -l | grep ".c"

The program performs the same operation as the above shell command.

fork() creates the child processes.

pipe() is used for communication.

dup2() redirects input and output.

exec() executes the commands.
