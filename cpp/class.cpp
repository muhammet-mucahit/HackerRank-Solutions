#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int num) {
            age = num;
        }
        int get_age() {
            return age;


        void set_first_name(string str) {
            first_name = str;
        }
        string get_first_name() {
            return first_name;
        }
    

