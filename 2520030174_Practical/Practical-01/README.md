Report on Linux Hardware Resources and Operating System Services
This report explains how the Linux operating system manages and abstracts hardware resources such as the CPU, memory, storage, and I/O devices using basic Linux commands.

uname -a

Displays information about the Linux operating system and kernel.

It also shows details about the system architecture.

lscpu

Displays CPU-related information, including the processor model, number of cores, and threads.

It helps us understand the system’s processor configuration.

lsblk

Lists all storage devices and their partitions.

It also shows where disks and partitions are mounted.

ps

Displays the processes that are currently running in the system.

It also shows the Process ID (PID) of each process.

top

Shows CPU and memory usage in real time.

It helps identify which processes are using the most system resources.

CPU
The operating system manages the CPU by allocating CPU time to different processes. This allows multiple programs to run smoothly at the same time.

Memory
The operating system provides memory to programs when they are running and releases it once they finish. It also protects the memory of one program from being accessed by another.

Storage
The operating system manages storage through files and folders. Users can access their data without needing to know where it is physically stored on the disk.

I/O Devices
The operating system communicates with devices such as the keyboard, mouse, monitor, and printer through device drivers. This makes these devices easier for users and programs to use.

Conclusion
From these commands, I understood that the operating system acts as a bridge between the user and the hardware. It manages the CPU, memory, storage, and I/O devices to ensure that programs run efficiently.
