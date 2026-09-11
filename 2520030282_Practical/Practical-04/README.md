wait()
The parent uses wait() to stop until any child finishes.  
When the child ends, wait(NULL) collects its exit status and removes it from the process table.

waitpid()
The parent uses waitpid() when it wants to wait for one specific child.  
Here, the parent gives the child’s PID. Example: waitpid(pid, NULL, 0).

Zombie Process
A zombie process happens when the child finishes but the parent does not collect its exit status.  
This occurs if the child calls exit(), the parent is still running, and the parent does not call wait() or waitpid().  
The child then stays in the process table as a zombie.

Removing a Zombie
The parent can clear the zombie by calling wait() or waitpid().  
This collects the exit status and removes the zombie entry.
