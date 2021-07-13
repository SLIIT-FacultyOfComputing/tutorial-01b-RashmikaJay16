/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int s1, s2;
  double avg, sum;

  printf("Enter the mark (subject1) :");
  scanf("%d", &s1);

  printf("Enter the mark (subject2) :");
  scanf("%d", &s2);

  sum = s1 + s2;

  printf("Total :%.2f\n", sum);

  avg = sum/2;

  printf("Average : %.2f", avg);


  
  return 0;
}

