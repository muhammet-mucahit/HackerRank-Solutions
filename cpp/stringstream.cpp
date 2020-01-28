#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> ints;
    
    stringstream ss(str);
    
    char ch;
    int temp;
    while(ss >> temp) {
        ints.push_back(temp);
        ss >> ch;
    }


}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {

