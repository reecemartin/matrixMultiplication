# matrix_multiplication
I'll be doing some experimenting with parallelization and matrix 
multiplication. My intention is to implement matrix multiplication in a linear
and a parallel fashion and then compare the running times on several machines
to see what the performance differences are.

# Implementation
For this I will be writing some C code using standard libraries as well
as the pthread library.

# How it works . . . 
In order to compare the differences in performance by way of measuring the time it takes
to compute large matrix multiplications we have two C files; one of which implements a linear
multiplication scheme and another which implements a parallel multiplication scheme. Both of 
these files utilize a matrix_generation function which generates large random matrices to be multiplied.
We time both implementations and compare the time. All files are called from main.c.
