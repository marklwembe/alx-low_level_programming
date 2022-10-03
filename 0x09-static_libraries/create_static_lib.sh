#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar rc liball.a *.o
<<<<<<< HEAD
rm *.o
=======
>>>>>>> a0225ab486c6e7ecd6d261094be967ea683d8c16
