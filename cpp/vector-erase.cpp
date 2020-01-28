#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;
    vector<int> array;
    int i, item;
    
    for(i = 0; i < size; i++) {
        cin >> item;


    
    int deletedIndex;
    cin >> deletedIndex;
    
    array.erase(array.begin() + deletedIndex - 1);
    
    int deletedIndex2;

