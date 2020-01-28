#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int size; cin >> size;
    int i;
    
    map<string, int> m;
    


    
    map<string,int>::iterator itr;
    
    for(i = 0; i < size; i++) {
        cin >> queryType >> key;
        
        if(queryType == 1) {

