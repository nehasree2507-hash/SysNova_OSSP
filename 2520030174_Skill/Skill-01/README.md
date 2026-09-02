# Interactive Shell - Skill 1

## Objective

- Install Linux using a virtual machine.
- Check and configure the GCC compiler.
- Create a Git repository for the project.
- Arrange the project files properly.
- Understand the role of the Linux shell.
- Use a Makefile to compile programs easily.
- Learn how a new process is created using `fork()`.
- Run programs using the `exec()` system calls.
- Understand the connection between parent and child processes.
- Check the process hierarchy in Linux.
- Use `strace` to view system calls.

## Commands Used

### Check GCC Version

```bash
gcc --version
```

### Check Git Version

```bash
git --version
```

### Start a Git Repository

```bash
git init
```

### Compile the C Program

```bash
gcc program.c -o program
```

### Run the Compiled Program

```bash
./program
```

### Display the Process Tree

```bash
pstree
```

### List Current Processes

```bash
ps -ef
```

### Track System Calls

```bash
strace ./program
```

## Observations

- The Linux virtual machine was installed successfully.
- GCC was available and used to compile the C program.
- A Git repository was created for managing the project files.
- The Linux shell was used to enter commands and interact with the system.
- The Makefile reduced the effort needed to compile the program again.
- The `fork()` call created a child process from the parent process.
- The `exec()` call allowed the child process to run another program.
- The parent and child processes received separate PIDs.
- The `pstree` command showed how the processes were connected.
- The `strace` command displayed the system calls used during program execution.

## Conclusion

This practical helped me understand the basic Linux development setup using a virtual machine, GCC, Git, and Makefiles. I also learned how Linux handles processes through `fork()` and `exec()`. Using `pstree` and `strace` made it easier to observe process relationships and the system calls made by a program.
