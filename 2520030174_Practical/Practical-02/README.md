## Tracing System Calls Using `strace`

### Command Used

```bash
strace cat sample.txt
```

### What is `strace`?

`strace` is a Linux command-line tool that allows us to monitor the system calls performed by a program during its execution. It helps in understanding how a program communicates with and requests services from the operating system.

### Common System Calls Observed

* **execve()** – Loads and executes the `cat` program.
* **openat()** – Opens the `sample.txt` file for accessing its contents.
* **read()** – Retrieves the contents stored in the file.
* **write()** – Sends the file contents to the terminal for display.
* **close()** – Closes the file after the required data has been read.
* **exit_group()** – Stops the execution of the program.

### Kernel Services Involved

* **Process Management** – `execve()` loads and starts the required program.
* **File Management** – `openat()` is used to access the file, while `close()` releases it after use.
* **I/O Management** – `read()` obtains data from the file and `write()` displays the data on the terminal.
* **Memory Management** – The kernel manages the memory resources needed by the program while it is running.

### Conclusion

By using `strace`, we can observe the order in which the `cat` command performs its system calls. This demonstrates how the operating system provides services for executing a process, accessing files, performing input/output operations, managing memory, and terminating the program.
