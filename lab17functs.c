/** lab17functs.c
* ===========================================================
* Name: Lucas Briggs 30 Sep 2024
* Section: T1/2 Kloenne
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int loadVals(int array[]) {
    int currVal = 0;
    int counter = 0;
    while (currVal >= 0) {
        printf("Enter a value (negative value to end): ");
        scanf(" %d", &currVal);
        array[counter] = currVal;
        counter++;
    }
    return counter - 1;
}

void reversePrint(int array[], int numVals) {
    int i;
    for (i = numVals-1; i >= 0; i -= 2) {
        printf("%d\n", array[i]);
    }
}

int countVowels(char myString[]) {
    int numVals = strlen(myString);
    int i;
    int vowelCount = 0;

    for (i = 0; i < numVals; ++i) {
        switch (myString[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                vowelCount++;
                break;
        }
    }
    return vowelCount;
}

int analyzeValues(double array[], int numVals) {
    double total = 0;
    double average;
    double addedSquares = 0;
    double standDev;
    int numWithinStandDev = 0;
    int i;

    for (i = 0; i < numVals; ++i) {
        total += array[i];
    }
    i = 0;
    average = total / numVals;

    for (i = 0; i < numVals; ++i) {
        double tempDiff = array[i] - average;
        addedSquares += pow(tempDiff, 2);
    }
    i = 0;
    standDev = pow(addedSquares/numVals, 0.5);

    printf("%lf", standDev);

    for (i = 0; i < numVals; ++i) {
        if ((average - standDev) < array[i] && (average + standDev) > array[i]) {
            numWithinStandDev++;
        }
    }

    return numWithinStandDev;
}
