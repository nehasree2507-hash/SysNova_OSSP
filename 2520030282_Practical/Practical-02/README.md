## Tracing System Calls with `strace`

### Command Used

```bash
strace cat sample.txt
```

### What is `strace`?

`strace` is a Linux utility that tracks the system calls made by a program while it is executing. It helps us understand how a program interacts with the operating system and uses different kernel services.

### Common System Calls Observed

* **execve()** – Starts and runs the `cat` program.
* **openat()** – Opens the `sample.txt` file so its contents can be accessed.
* **read()** – Reads the data from the file.
* **write()** – Outputs the file data to the terminal.
* **close()** – Closes the file once the operation is completed.
* **exit_group()** – Ends the execution of the program.

### Kernel Services Involved

* **Process Management** – `execve()` is used to load and execute the program.
* **File Management** – `openat()` opens the required file and `close()` closes it after use.
* **I/O Management** – `read()` gets the file contents and `write()` sends them to the terminal.
* **Memory Management** – The kernel handles the memory required while the program is executing.

### Conclusion

The `strace` command helps us understand how the `cat` program communicates with the Linux kernel. By tracing its system calls, we can observe the process of starting the program, opening and reading a file, displaying its contents, closing the file, and finally ending the execution.
