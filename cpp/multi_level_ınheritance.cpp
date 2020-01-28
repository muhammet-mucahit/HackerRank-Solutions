#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
    public:
        void triangle(){
            cout<<"I am a triangle\n";
        }
};

class Isosceles : public Triangle{
    public:


        }
};

class Equilateral : public Isosceles {
    public:
          void equilateral(){
            cout<<"I am an equilateral triangle\n";

