# Practical 1

## Objective

- Install Linux Virtual Machine.
- Configure the GCC compiler.
- Set up a Git repository.
- Create the project structure.
- Understand the Linux shell architecture.
- Build and use a simple Makefile.
- Learn process abstraction using `fork()`.
- Execute programs using the `exec()` family of system calls.
- Observe the parent-child relationship between processes.
- View the process tree.
- Trace system calls using `strace`.

## Commands Used

### Check GCC Installation

```bash
gcc --version
```

### Check Git Installation

```bash
git --version
```

### Create a Git Repository

```bash
git init
```

### Compile a C Program

```bash
gcc program.c -o program
```

### Run the Program

```bash
./program
```

### View Process Tree

```bash
pstree
```

### Display Running Processes

```bash
ps -ef
```

### Trace System Calls

```bash
strace ./program
```

## Observations

- Linux VM was installed successfully.
- GCC was used to compile C programs.
- Git repository was created to manage project files.
- The shell executed user commands and communicated with the Linux kernel.
- The Makefile simplified the compilation process.
- `fork()` created a child process from the parent process.
- The `exec()` system call replaced the child process with a new program.
- Parent and child processes had different Process IDs (PIDs).
- `pstree` displayed the relationship between parent and child processes.
- `strace` showed the sequence of system calls made by the program.

## Conclusion

In this practical, I learned how to set up a Linux development environment using a virtual machine, GCC, Git, and Makefiles. I also understood how Linux creates and manages processes using `fork()` and `exec()`, how parent and child processes are related, and how `strace` can be used to observe system calls made by a program.f
