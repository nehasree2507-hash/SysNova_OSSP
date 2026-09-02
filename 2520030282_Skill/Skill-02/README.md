# Interactive Shell – Skill 2

## Objective
- Build a simple interactive shell loop.
- Display a custom prompt to the user.
- Accept keyboard input character by character.
- Provide options (`exit` or `quit`) to terminate the shell.
- Handle Backspace for editing.
- Detect Enter to process commands.
- Maintain an input buffer for multi‑character commands.
- Test the shell’s functionality with sample inputs.

## Features
- Shows the prompt: `skill2-shell>`
- Reads input one keystroke at a time.
- Supports correction using Backspace.
- Executes the command when Enter is pressed.
- Ends execution when `exit` or `quit` is typed.
- Accepts multi‑character commands seamlessly.

## Control Flow
1. Print the shell prompt.
2. Read keyboard input one character at a time.
3. Store each character in the buffer.
4. If Backspace is pressed → remove the last character.
5. If Enter is pressed → process the command.
6. If the command is `exit` or `quit` → terminate the shell.
7. Otherwise → display the command and continue looping.

## Sample Output
skill2-shell> Hieee
HieeeCommand entered: Hieee
skill2-shell> ^C
hasini@LAPTOP-IMD4AV90:~$

## Conclusion
This program demonstrates a basic interactive shell using Linux system calls.  
It reads input character by character, supports editing with Backspace, processes commands on Enter, and exits gracefully when `exit` or `quit` is entered.  
The sample output confirms the shell loop works as expected, echoing commands and returning to the system prompt when interrupted.
