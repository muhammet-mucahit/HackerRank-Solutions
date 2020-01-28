#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arraySize;
    cin >> arraySize;
    
    vector<int> array(arraySize);
    int i;
    for(i = 0; i < arraySize; i++)
        cin >> array[i];
    


    
    int query;
    vector<int>::iterator low;
    while(cin >> query) {
        // cin >> query;
        low = lower_bound(array.begin(), array.end(), query);
        int pos = low - array.begin();

