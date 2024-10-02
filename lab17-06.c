/** lab17-06.c
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

   int myArray[5] = {27, 6, 2, 1, 17};
   int numVals = 5;
   int min;
   int max;

   getMinMax(myArray, numVals, &min, &max);

   printf("Given array = {27, 6, 2, 1, 17}, the min is %d, and the max is %d.\n", min, max);
   
   return 0;

}