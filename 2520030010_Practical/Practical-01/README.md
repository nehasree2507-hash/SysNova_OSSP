# Report on Linux Hardware Resources and Operating System Services

This report explains how the Linux operating system abstracts CPU, memory, storage, and I/O devices using basic Linux commands.


**uname -a**
- Shows information about the Linux operating system and kernel.
- It also displays the system architecture.

**lscpu**
- Shows CPU details like processor model, number of cores and threads.
- Helps us know the processor configuration.

**lsblk**
- Lists the storage devices and their partitions.
- Shows where the disks are mounted.

**ps**
- Displays the processes that are currently running.
- Also shows the Process ID (PID) of each process.

**top**
- Displays CPU and memory usage in real time.
- Shows which processes are using more system resources.

### CPU
The operating system manages the CPU by giving each process CPU time. This helps multiple programs run at the same time.

### Memory
The operating system allocates memory to programs when they run and frees it after they finish. It also prevents one program from accessing another program's memory.

### Storage
The operating system manages storage using files and folders. Users don't need to know where the data is physically stored on the disk.

### I/O Devices
The operating system communicates with devices like the keyboard, mouse, monitor and printer through device drivers, making them easy to use.

### Conclusion
From these commands, I understood that the operating system acts as a bridge between the user and the hardware. It manages CPU, memory, storage and I/O devices so that programs can run efficiently.
