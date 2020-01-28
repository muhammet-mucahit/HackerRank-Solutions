#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, item;
    cin >> size;
    
    vector<int> array;
    while(cin >> item)
        array.push_back(item);
    


    int i;
    for(i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    return 0;
}

