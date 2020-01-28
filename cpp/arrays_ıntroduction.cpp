#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void reverseArray(int *array, int size) {
    int i, j = size - 1, temp;
    for(i = 0; i < size / 2; i++) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        j--;
    }


int main() {
    int size, i = 0;
    cin >> size;
    int array[size];
    while(cin >> array[i++]);
    
    reverseArray(array, size);

