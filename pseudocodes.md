# Simple Shell Project Pseudocode

## Task 0: Betty would be proud
- Implement coding style checks.
- Ensure clean and well-formatted code.

## Task 1: Simple shell 0.1
- Define a main function:
  - Display a prompt.
  - Read user input.
  - Parse the input into a command.
  - Execute the command.
  - Handle errors.

## Task 2: Simple shell 0.2
- Modify the command parsing to handle arguments.

## Task 3: Simple shell 0.3
- Implement PATH resolution for command execution.
- Prevent fork if the command doesn't exist.

## Task 4: Simple shell 0.4
- Implement the 'exit' built-in command.
- Handle shell termination.

## Task 5: Simple shell 1.0
- Implement the 'env' built-in command.
- Print the current environment variables.

## Task 6: Simple shell 0.1.1 (Advanced)
- Create a custom 'getline' function.
- Use a buffer to read multiple characters efficiently.

## Task 7: Simple shell 0.2.1 (Advanced)
- Implement command line parsing without using 'strtok'.

## Task 8: Simple shell 0.4.1 (Advanced)
- Modify 'exit' command to accept an exit status.

## Task 9: setenv, unsetenv (Advanced)
- Implement 'setenv' and 'unsetenv' built-in commands.
- Manage environment variables.

## Task 10: cd (Advanced)
- Implement the 'cd' built-in command to change the current directory.

## Task 11: ; (Advanced)
- Handle the ';' command separator to execute multiple commands sequentially.

## Task 12: && and || (Advanced)
- Implement '&&' and '||' logical operators.
- Control command execution based on success/failure.

## Task 13: alias (Advanced)
- Implement 'alias' built-in command.
- Manage command aliases.

## Task 14: Variables (Advanced)
- Handle variable replacement for special variables like $? and $$.

## Task 15: Comments (Advanced)
- Implement comment handling marked with '#'.

## Task 16: File as input (Advanced)
- Allow the shell to accept a file as input.
- Execute commands from the file.
