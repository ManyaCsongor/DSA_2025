//
// Created by manya on 2/18/2025.
//

#include "functions.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float minimum(float number1, float number2, float number3) {
    if(number1<number2) {
        if(number1<number3)
            return number1;
        return number3;
    }
    if(number2<number3)
        return number2;
    return number3;
}

float * allocateMemoryForArray1(int n) {
    float* array=(float*)malloc(n*sizeof(float));
    if(!array) {
        printf("Error allocating memory!");
        return NULL;
    }
    return array;
}

void printArray(int n, float *pArray, const char *output) {
    FILE* print=fopen(output,"w");
    if(!print) {
        printf("Error!");
        exit(-1);
    }
    for(int i=0;i<n;i++) {
        fprintf(print,"%.2f ",pArray[i]);
    }
    fprintf(print,"\n");
    fclose(print);
}

void deallocateMemoryForArray(float **dpArray) {
    free(*dpArray);
    *dpArray=NULL;
}

void fillWithRandomNumbers(int n, float *pArray, float start, float end) {
    srand(time(NULL));
    for(int i=0;i<n;i++) {
        pArray[i]=start+(end-start)*((float)rand()/RAND_MAX);
    }
}



