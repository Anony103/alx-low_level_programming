0x15. C - File I/O
Resources to read or watch:
File descriptors
C Programming in Linux Tutorial #024 - open() read() write() Functions | Intranet
man or help:
open, close, read, write, dprintf

Introduction/Objective
To look for the right source of information online
To know how to create, open, close, read and write files
To know what file descriptors are
To know what the 3 standard file descriptors are, their purpose and their POSIX names
To know how to use the I/O system calls open, close, read and write
To know what the flags, O_RDONLY, O_WRONLY, O_RDWR are, and how to use them
To know what are file permissions, and how to set them when creating a file with the open system call
To know what a system call is
To know what the difference between a function and a system call
General Requirements
Allowed editors: vi, vim, emacs
Allowed syscalls: read, write, open, close
All files is compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All files ends with a new line
No more than 5 functions per file
There is a README.md file, at the root of the folder of the project
Codes are compiled using the Betty style
The only C standard library functions allowed are malloc, free and exit.
Also allowed to use _putchar
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
All header files were include guarded
Tip: Symbolic constants (POSIX) vs numbers where used. For instance read(STDIN_FILENO, ... vs read(0, ...
