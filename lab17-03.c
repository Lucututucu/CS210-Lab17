/** lab17-03.c
* ===========================================================
* Name: Lucas Briggs 30 Sep 2024
* Section: T1/2 Kloenne
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/

#include <stdio.h>
#include <string.h>
#include "lab17functs.h"

int main(void) {
   // The average of this array is 4.067 and the standard deviation is 1.849
   double values[] = { 5.0, 3.1, 7.2, 3.8, 4.2, 1.1 };

   int numVals = 6;
   
   int numWithinStandDev = analyzeValues(values, numVals);

   printf("The number of values within one standard deviation of the mean is %d\n", numWithinStandDev);

   return 0;
}