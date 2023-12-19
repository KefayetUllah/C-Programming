/*Write a program with a for loop that counts from 0 to 9,
displaying the numbers on the screen. Print the numbers
using a pointer.*/

#include <stdio.h>

int main() {
  int numbers[10];
  // Declare a pointer to the first element of the array
  int* ptr = numbers;

  // Initialize the array with values from 0 to 9
  for (int i = 0; i < 10; i++) {
    numbers[i] = i;

    printf("%d\n", *ptr);
    ptr++; // Increment the pointer to point to the next element
  }
  return 0;
}
