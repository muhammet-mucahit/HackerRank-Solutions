#include <iostream>
#include <string>
using namespace std;

int main() {
    string frst, scnd;
    cin >> frst >> scnd;
    
    cout << frst.size() << " " << scnd.size() << "\n";
    cout << frst + scnd << "\n";
    
    char firstLetter = frst[0];
    frst[0] = scnd[0];
    scnd[0] = firstLetter;
    
    cout << frst << " " << scnd;


}

