        //
// Created by manya on 3/25/2025.
//

#include "Functions_Stack.h"
#include <stdlib.h>
#include <stdio.h>
void createStack(int capacity, Stack *stack) {
    stack->capacity = capacity;
    stack->top = -1;
    stack->elements = (int*)calloc(stack->capacity, sizeof (int));
    if(!stack->elements) {
        printf("Error allocating memory\n");
        exit(-1);
    }
}

bool isEmpty(Stack stack) {
    return stack.top == -1;
}
bool isFull(Stack stack) {
   return stack.top == stack.capacity-1;
}

void push(Stack *stack, int item) {
    if(isFull(*stack)) {
    printf("Stack is full\n");
    return;
    }
    stack->elements[++stack->top] = item;
}

int pop(Stack *stack) {
    if (isEmpty(*stack)) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    int save = stack->elements[stack->top];
    stack->elements[stack->top--] = 0;
    return save;
}

int peek(Stack stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    return stack.elements[stack.top];
}

int size(Stack stack) {
    return stack.top+1;
}