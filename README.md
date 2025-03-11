# QuadraticCPP
This program computes the quadratic formula of three coefficients to see if the roots are valid, imaginary, or if the equation is not a quadratic equation.

This program focuses on computing the quadratic equation of three user inputted coefficients. Given the user inputs, the variables "a", "b", and "c" (from the format "ax^2 + bx + c") are computed and used in comparison statements to see whether the roots of the equation are imaginary, valid, or if the equation is not a quadratic equation. The program's first step is prompting the user for input and then storing the user input in double variables "a", "b", and "c". The program stores the variables as double since we are expecting the floating point number system in this program, and makes it more easier for computation later since we do not have to cast an integer as a floating point later on. Following the first step, the variable "a" is compared to zero to see if it is zero itself. If "a" is equal to zero, the program outputs "Not a quadratic equation" then terminates the program. If "a" is not equal to zero, it goes to the else statement where the next step of computation is determining the discriminant. After computimg the discriminat, it is compared to zero. If the discriminant is less than zero, the program outputs "Roots are imaginary" and terminates the program. If the disciminant is greater than zero, it enters the final else statement where both roots are computed. Following the computation of the quadratic formula to obtain both roots, the two root values are outputted and the program terminates.
