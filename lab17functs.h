/** lab17functs.h
* ===========================================================
* Name: Lucas Briggs 30 Sep 2024
* Section: T1/2 Kloenne
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/

#ifndef LAB17FUNCTS_H
#define LAB17FUNCTS_H

/** 
 * @brief Prompts the user for integer values and stores them in the parameter array. Continues until it receives a negative value
 * @param array An array of integers
 * @return The number of values input by the user
 */ 
int loadVals(int array[]);

/** 
 * @brief Prints out every other value in the array starting with the last value in the array
 * @param array An array of integers
 * @param numVals The integer length of the array
 * @return Nothing
 */ 
void reversePrint(int array[], int numVals);

/** 
 * @brief Returns the number of vowels in the passed array
 * @param myString A string
 * @return the number of vowels in the passed array.
 */ 
int countVowels(char myString[]);

/** 
 * @brief Returns an integer indicating how many values in the array are within one standard deviation of the mean
 * @param array An array of doubles
 * @param numVals An integer representing the size of the array
 * @return An integer indicating how many values in the array are within one standard deviation of the mean
 */ 
int analyzeValues(double array[], int numVals);

/** 
 * @brief  Performs the operation requested by the user (+, -, *, /) on the numbers provided, and returns the calculated value
 * @param myChar A character representing the operation you wish to perform
 * @param num1 An integer
 * @param num2 An integer
 * @return Calculated result of operation on both integers
 */ 
int performOperation(char myChar, int num1, int num2);

/** 
 * @brief calculates the minimum and maximum values in the array, and stores them at the address location specified by two integer pointers
 * @param array An integer array
 * @param numVals An integer, representing the size of the array
 * @param min An integer pointer representing the Minimum
 * @param max An integer pointer representing the Maximum
 * @return Nothing
 */ 
void getMinMax(int array[], int numVals, int* min, int* max);

#endif
