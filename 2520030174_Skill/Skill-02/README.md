# Interactive Shell - Skill 2

## Objective

* Build a basic interactive shell loop.
* Show the shell prompt to the user.
* Take input from the keyboard.
* Provide `exit` and `quit` options to stop the shell.
* Read keyboard input one character at a time.
* Support the Backspace key.
* Detect and process the Enter key.
* Maintain an input buffer.
* Accept commands containing multiple characters.
* Test the working of the interactive shell.

## Features

* Shows the prompt `skill2-shell>`.
* Reads input one character at a time.
* Allows the user to correct input using Backspace.
* Processes the command when Enter is pressed.
* Stops execution when `exit` or `quit` is entered.
* Allows multi-character commands to be entered.

## Control Flow

1. Print the shell prompt.
2. Read the keyboard input one character at a time.
3. Store each character in the input buffer.
4. When Backspace is pressed, delete the previous character.
5. When Enter is pressed, process the command.
6. If the command is `exit` or `quit`, end the program.
7. Otherwise, display the command and continue the shell loop.

## Sample Output

```text
skill2-shell> yippe
yippeCommand entered: yippe
skill2-shell> maggieee
maggieeeCommand entered: maggieee
skill2-shell> noodless
noodlessCommand entered: noodless
skill2-shell> ^C
nehasree_padamati@LAPTOP-D4OP72LB:~$
```

## Conclusion

This program implements a basic interactive shell using Linux system calls. It accepts keyboard input character by character, allows Backspace editing, processes the command when Enter is pressed, and terminates when `exit` or `quit` is entered.
