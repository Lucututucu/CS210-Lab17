/** lab17-05.c
* ===========================================================
* Name: Lucas Briggs 30 Sep 2024
* Section: T1/2 Kloenne
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/

#include <stdio.h>
#include "lab17functs.h"

int main(void) {
   char myChar;
   int num1;
   int num2;
   int result;

   printf("Enter an operator (+, -, *, /):\n");
   scanf(" %c", &myChar);
   printf("Please enter two integer values separated by a space:\n");
   scanf(" %d %d", &num1, &num2);

   result = performOperation(myChar, num1, num2);

   printf("Operation = %d\n", result);

   return 0;
}