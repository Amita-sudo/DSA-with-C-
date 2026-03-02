#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    // char c;
    // char c1;
    float marks;
};
int main()
{
    Student *s1 = new Student;
    (*s1).name = 'Amita';
    (*s1). roll =23;
(*s1).marks = 3;
    // cout << sizeof(s1);
    // s1.name = 'Amita';
    // s1.roll = 2;
    cout<< s1->name ;
}
