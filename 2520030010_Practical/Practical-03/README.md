## Process State Transitions Using `ps`, `top`, and `/proc`

### Commands Used

```bash
ps -e -o pid,ppid,state,cmd
```

```bash
top
```

```bash
cat /proc/<PID>/status
```

### Process States Observed

- **Ready (R)** – The process is ready to run or is currently running on the CPU.
- **Running (R)** – The process is actively executing on the CPU.
- **Waiting (S/D)** – The process is waiting for an event such as user input or I/O operation.
- **Terminated (Z)** – The process has finished execution. If it is not cleaned up by the parent process, it appears as a zombie.

### Observations

- The `ps` command displays the process ID (PID), parent process ID (PPID), process state, and command.
- The `top` command shows running processes along with CPU and memory usage in real time.
- The `/proc/<PID>/status` file provides detailed information about a specific process, including its current state.
- A process changes from **Ready → Running → Waiting (if required) → Running → Terminated** during its execution.

### Conclusion

Using the `ps`, `top`, and `/proc` commands, the different process states can be observed. Linux continuously changes the process state depending on CPU scheduling and I/O operations, allowing multiple processes to execute efficiently.
