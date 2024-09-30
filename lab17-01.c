/** lab17-01.c
* ===========================================================
* Name: Lucas Briggs 30 Sep 2024
* Section: T1/2 Kloenne
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/

#include <stdio.h>
#include "lab17functs.h"
#define ARRAY_LENGTH 20

int main(void) {
   int array[ARRAY_LENGTH];
   int numVals;

   numVals = loadVals(array);

   reversePrint(array, numVals);

   return 0;

}