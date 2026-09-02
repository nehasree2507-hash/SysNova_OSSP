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

* **Ready (R)** – The process is prepared to execute or may currently be using the CPU.
* **Running (R)** – The process is actively being executed by the CPU.
* **Waiting (S/D)** – The process is temporarily waiting for an event, such as input or an I/O operation, to complete.
* **Terminated (Z)** – The process has completed its execution. If the parent process does not immediately remove its entry, it remains as a zombie process.

### Observations

* The `ps` command provides details such as the process ID (PID), parent process ID (PPID), current state, and command being executed.
* The `top` command provides a real-time view of active processes along with their CPU and memory consumption.
* The `/proc/<PID>/status` file contains detailed information about an individual process, including its present state.
* During execution, a process can move through states such as **Ready → Running → Waiting (when needed) → Running → Terminated**.

### Conclusion

The `ps`, `top`, and `/proc` commands make it possible to monitor and understand different process states in Linux. A process can move between states based on CPU scheduling and I/O requirements, which helps the operating system manage and run multiple processes effectively.
