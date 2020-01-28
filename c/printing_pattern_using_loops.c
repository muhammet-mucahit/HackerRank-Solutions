#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int index = 0;

void printPattern(int n) {
    int size = (2 * n) - 1;
    int s = size;
    int i, j, k, pattern[size][size];
    
    for(k = n; k > 0; k--) {
        for(i = index; i < size; i++) {
            for(j = index; j < size; j++) {
                pattern[i][j] = k;


        ++index;
        size -= 1;
    }
    
    for(i = 0; i < s; i++) {
        for(j = 0; j < s; j++) {
            printf("%d ", pattern[i][j]);

