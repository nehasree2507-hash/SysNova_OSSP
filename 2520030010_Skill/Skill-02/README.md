# Interactive Shell - Skill 2

## Objective

- Create a main interactive loop.
- Display a shell prompt.
- Read user input from the keyboard.
- Handle exit conditions (`exit` and `quit`).
- Capture keyboard input character by character.
- Handle the Backspace key.
- Process the Enter key.
- Manage the input buffer.
- Support multi-character commands.
- Test the interactive shell.

## Features

- Displays the prompt `skill2-shell>`.
- Accepts user input one character at a time.
- Supports editing using the Backspace key.
- Executes the input after pressing Enter.
- Terminates when the user enters `exit` or `quit`.
- Handles commands of multiple characters.

## Control Flow

1. Display the shell prompt.
2. Read keyboard input character by character.
3. Store characters in the input buffer.
4. If Backspace is pressed, remove the previous character.
5. If Enter is pressed, process the entered command.
6. If the command is `exit` or `quit`, terminate the program.
7. Otherwise, display the entered command and continue the loop.

## Sample Output

```text
skill2-shell> hello
Command entered: hello

skill2-shell> operating systems
Command entered: operating systems

skill2-shell> exit
Exiting Skill 2 interactive loop...
```

## Conclusion

This program demonstrates a simple interactive shell using Linux system calls. It continuously accepts user input, supports backspace editing, processes commands after pressing Enter, and exits when the user enters `exit` or `quit`.
