# hello_world

A list of "Hello, World!" projects written in different languages that I have made to demonstrate knowledge of low-level concepts.

#


### exec_page

A program that aims to take a 128 bit integer, of which is a type-punned "`Hello, World!\n`" string literal, and pass as an argument into machine code stored in an `unsigned char` array to be copied to an executable page, called by a function pointer.

In the current state of the program, it achieves this, albeit without using the 128 bit integer as an argument -- it is hardcoded / stored internally.

Previous iterations of the program have been kept in the directory.
