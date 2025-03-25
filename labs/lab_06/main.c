#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Functions_Stack.h"
int main(void) {
    Stack stack;
    createStack(100,&stack);
    char s[100];
    scanf("%[^\n]", s);
    char *p= strtok(s, " ");
    while (p != NULL) {
        char temp[100];
        strcpy(temp, p);
        if (!strchr(p, '+') && !strchr(p, '-') && !strchr(p, '/') && !strchr(p, '*')) {
            int sum = 0;
            int po=strlen(p)-1;
            for(int i=0; i<strlen(p);i++) {
                sum += pow(10,po)*(p[i] - '0');
                po--;
            }
            push(&stack, sum);
        }
        else {
            int temp1, temp2;
            temp1 = pop(&stack);
            temp2 = pop(&stack);
            if(strchr(p, '+')) {
                push(&stack, temp2 + temp1);
            }
            else {
                if(strchr(p, '-')) {
                    push(&stack, temp2 - temp1);
                }
                else {
                    if(strchr(p, '*')) {
                        push(&stack, temp2 * temp1);
                    }
                    else {
                        push(&stack, temp2 / temp1);
                    }
                }
            }
        }
        p=strtok(NULL, " ");
    }
    printf("%d", pop(&stack));
    return 0;
}
