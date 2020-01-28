#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void evenOrOdd(int num) {
    if(num % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);


    for(i = a; i <= b; i++) {
        if(i == 1)
            printf("one\n");
        else if(i == 2)
            printf("two\n");
        else if(i == 3)
            printf("three\n");

