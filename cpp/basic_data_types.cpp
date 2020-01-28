#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int inta;
    long longa;
    char chara;
    float floata;
    double doublea;
    
    scanf("%d %ld %c %f %lf", &inta, &longa, &chara, &floata, &doublea);
    printf("%d\n%ld\n%c\n%f\n%lf", inta, longa, chara, floata, doublea);
    return 0;
}

