#include <bits/stdc++.h>

using namespace std;

char *numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(n > 9)
        printf("Greater than 9");
    else
        printf("%s", numbers[n - 1]);


}


