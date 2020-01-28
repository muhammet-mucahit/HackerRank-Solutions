#include <iostream>
#include <cstdio>
using namespace std;

char *numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
    int first, last;
    cin >> first >> last;
    
    int i;
    for(i = first; i <= last; i++) {
        i < 10 ? printf("%s\n", numbers[i - 1]) : i % 2 == 0 ? printf("even\n") : printf("odd\n");
    }
    return 0;
}

