#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
    int i, j, maxAnd = 0, maxOr = 0, maxXor = 0;
    int and, or, xor;
    
    for(i = 1; i < n; i++) {
        for(j = i + 1; j <= n; j++) {
            and = (i & j);
            or = (i | j);
            xor = (i ^ j);
            


            if(or < k && or > maxOr)
                maxOr = or;
            if(xor < k && xor > maxXor)
                maxXor = xor;
        }  
    }
    

