//
// Created by manya on 2/18/2025.
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
float minimum(float number1, float number2, float number3);
float* allocateMemoryForArray1(int n);
void printArray(int n, float *pArray, const char *output);
void deallocateMemoryForArray(float **dpArray);
void fillWithRandomNumbers(int n, float *pArray, float start, float end);
#endif //FUNCTIONS_H
