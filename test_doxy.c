/**
 * @file sumting.c
 * @brief A simple function to add two numbers
 * 
 * This file demonstrates how to write a function with Doxygen comments.
 * 
 * @author Your Name
 * @date 2025-03-08
 */

 #include <stdio.h>

 /**
  * @brief Adds two integers.
  * 
  * This function takes two integers and returns their sum.
  *
  * @param a First integer
  * @param b Second integer
  * @return int Sum of a and b
  */
 int add(int a, int b) {
     return a + b;
 }
 
 /**
  * @brief Main function
  * 
  * Demonstrates usage of the add function.
  */
 int main() {
     int x = 5, y = 10;
     printf("Sum: %d\n", add(x, y));
     return 0;
 }
 