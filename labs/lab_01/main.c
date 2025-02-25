#include <stdio.h>

#include "functions.h"

int main() {
    int n;
    scanf("%d",&n);
    float* array=allocateMemoryForArray1(n);
    fillWithRandomNumbers(n,array,0,1);
    printArray(n,array,"print.txt");
    printf("%.2f", minimum(array[0],array[n-1],array[n/2]));
    deallocateMemoryForArray(&array);
    return 0;
}