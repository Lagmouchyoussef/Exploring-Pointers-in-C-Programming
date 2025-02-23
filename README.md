# Exploring-Pointers-in-C-Programming
Master the essentials of pointers in C programming through practical exercises and examples
Pointers
Exercise:
a. Write a program that asks the user to enter integers and reads them using pointers, then displays the largest number.

b. Define a function that takes 4 integers as parameters, calculates the sum and subtraction of the first two variables, and stores them in the last two variables. Test the function in the main function.

c. Write a function that takes as parameters an array of integers of any size, the size of the array, and 2 pointers to integers min and max. The function should return in the integers pointed to by min and max the smallest and largest integer in the array, respectively. Test the function in the main function.

d. Let p be a pointer that "points" to an array T:
int T[1] = {12, 4, 16, 3, 0, 47, 1, 22, 25};
int *p;
p = T;

What values or addresses do the following expressions provide:

1- *p+2 5- T+3

2- *(p+2) 6- &T[7]+P

3- &P+1 7- P+(*P-10)

4- &T[4]-3 8- (p+(p+8)-T[7])

e. Write a program that reads an integer X and an array A of type int from the keyboard and displays the position of X in A, using a pointer to the array to traverse it.

f. Write a program that reads the dimension N of an array T of type integer, fills the array with values entered from the keyboard, and displays the array. Then calculate and display the sum of the elements of the array. Use pointer notation.

g. Write a program that reads an integer X and an array A of type int from the keyboard and removes all occurrences of X in A by shifting the remaining elements. The program will use pointers P1 and P2 to traverse the array
