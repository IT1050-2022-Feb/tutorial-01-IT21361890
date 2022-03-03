/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int maths, english;
  float mathsmark, englishmark, Average;

  printf("enter the maths : ");
  scanf("%d", &mathsmark);

  printf("enter the English : ");
  scanf("%d", &englishmark);

  Average = (mathsmark + englishmark) / 2
  return 0;
}

