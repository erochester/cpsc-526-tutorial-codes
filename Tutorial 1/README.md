# Tutorial 1 Example C Codes

Includes 2 examples of how to work with *fork()* function and a single *memset()* example.

*simple_fork.c* shows how forking process will output "Hello world" two times.

*trick_fork.c* shows similar idea, but extended to forked processes creating their own processes, resulting in 2^n growth.
In this case we end up with 8 "Hello world" outputs.

*simple_memset.c* shows how we can use memset() to replace first 12 characters in a string to become '%'.
