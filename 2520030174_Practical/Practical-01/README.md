# Linux System Resources and OS Services

Linux handles the computer's hardware resources and provides services that allow users and programs to work with them easily. The following commands help us view information about the system.

**uname -a**

- Prints details about the operating system and Linux kernel.
- Includes information about the machine architecture.

**lscpu**

- Provides information about the processor.
- Shows details such as CPU model, cores, threads, and architecture.

**lsblk**

- Displays available block devices, including disks and partitions.
- Helps identify storage devices and their mount points.

**ps**

- Lists processes that are active at the time the command is run.
- Displays the process ID assigned to each process.

**top**

- Monitors running processes dynamically.
- Shows current CPU and memory usage across the system.

### Processor Management

Linux shares processor time among running processes through scheduling. This ensures that multiple applications can receive CPU time and continue running without one program taking complete control of the processor.

### Memory Management

The operating system assigns RAM to applications as they execute. It keeps each process in its own protected memory area, which improves system stability and prevents unwanted access between programs.

### Disk Management

Linux organizes disk data through a file system. Files and directories provide a simple way to store and access information, while the operating system handles the underlying physical storage details.

### Device Management

Hardware such as keyboards, displays, printers, and mice is controlled through device drivers. These drivers allow the operating system and applications to communicate with hardware in a standard way.

### Conclusion

The Linux operating system works as an interface between software and computer hardware. It manages processing, memory, storage, and connected devices so that applications can run properly and users can access system resources easily.
