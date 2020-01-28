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


            cout << "I am an isosceles triangle\n";
        }
        void description() {
            cout << "In an isosceles triangle two sides are equal" << endl;
        }
};


