#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int querySize;
    cin >> querySize;
    
    set<int> s;
    
    int i, y, x;


        cin >> y >> x;
        if(y == 1)
            s.insert(x);
        else if(y == 2)
            s.erase(x);
        else {
            itr = s.find(x);

