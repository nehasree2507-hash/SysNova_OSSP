## Tracing System Calls Using `strace`

### Command Used

```bash
strace cat sample.txt
```

### What is `strace`?

`strace` is a Linux utility used to display all the system calls made by a program while it is running. It helps us understand how a program interacts with the operating system.

### Common System Calls Observed

- **execve()** – Starts the `cat` command.
- **openat()** – Opens the `sample.txt` file.
- **read()** – Reads data from the file.
- **write()** – Displays the file contents on the terminal.
- **close()** – Closes the opened file.
- **exit_group()** – Terminates the program.

### Kernel Services Involved

- **Process Management** – `execve()` creates and starts the process.
- **File Management** – `openat()` and `close()` handle opening and closing the file.
- **I/O Management** – `read()` reads data from the file and `write()` sends it to the terminal.
- **Memory Management** – The kernel allocates memory required during program execution.

### Conclusion

Using `strace`, we observed the sequence of system calls executed by the `cat` command. It showed how the operating system handles process creation, file access, input/output operations, and process termination through kernel services.
