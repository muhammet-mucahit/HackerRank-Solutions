#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    int digit, sum = 0;
    while(n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }


    
    return 0;
}

