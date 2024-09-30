/** lab17-02.c
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
   int numVowels;

   char myStr[] = "hello, this is a test.";

   numVowels = countVowels(myStr);

   printf("The number of vowels is %d.\n", numVowels);

   return 0;

}