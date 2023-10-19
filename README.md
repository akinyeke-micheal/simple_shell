# simple_shell
2nd PROJECT @ALX_SE
# Simple Shell

![Shell Logo](shell.png)

Simple Shell is a basic and straightforward implementation of a shell, providing essential shell functionalities. It is designed for educational purposes to help individuals understand the core concepts of how a shell works and can serve as a starting point for further exploration and development.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Features

- Command execution: Run basic shell commands.
- Simple prompt: Provides a basic command prompt for user input.
- Input and output redirection: Support for redirecting input and output to/from files.
- Pipe support: Execute commands in a pipeline.
- Background processes: Run processes in the background.
- Basic error handling: Handle errors and display error messages.

## Getting Started

### Prerequisites

Before you can use Simple Shell, make sure you have the following prerequisites installed on your system:

- C compiler (e.g., GCC)
- Make

### Installation

1. Clone the Simple Shell repository to your local machine:

   ```bash
   git clone  https://github.com/akinyeke-micheal/simple_shell.git
Navigate to the project directory:

bash
Copy code
cd simple-shell
Compile the code using the provided Makefile:

bash
Copy code
make
Run the Simple Shell:

bash
Copy code
./simple-shell
Usage
Once you have Simple Shell up and running, you can use it just like a regular shell. Here are some basic commands and usage examples:

Execute a command:

bash
Copy code
$ ls -l
Redirect input and output:

bash
Copy code
$ cat input.txt > output.txt
Use pipes to chain commands:

bash
Copy code
$ ls | grep "file"
Run a command in the background:

bash
Copy code
$ sleep 10 &
For more information and advanced usage, refer to the wiki.

Contributing
We welcome contributions from the community. If you have any ideas, bug fixes, or enhancements, please feel free to submit a pull request. Before doing so, please read our contributing guidelines.

License
This project is licensed under the MIT License - see the LICENSE file for details.
