Named Pipe (FIFO) Client-Server

The client sends messages to the server through a named pipe (FIFO).

The server reads the message, processes it and sends a response back.

FIFO allows processes to communicate even when they are not related.

When multiple clients communicate at the same time, their messages may be handled one after another depending on the server and FIFO access.

POSIX Signal Handling

The program handles SIGINT, SIGTERM and SIGUSR1 using signal handlers.

SIGINT is generated using Ctrl+C.

SIGTERM is used to request process termination.

SIGUSR1 is a user-defined signal.

A signal handler is a function that is called when a particular signal is received.

Signals allow the process to handle events asynchronously.
