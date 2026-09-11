**Producer-Consumer using Anonymous Pipe**

The parent process generates the data and writes it into the pipe.

The child process receives the data by reading from the pipe.

The pipe provides communication between the parent and child processes.

`ls -l | grep ".c"`

The program carries out the same operation as the above shell command.

`fork()` creates the child process.

`pipe()` is used for communication.

`dup2()` redirects the input and output.

`exec()` is used to execute the commands.
