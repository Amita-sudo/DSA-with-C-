#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll;
    // char c;
    // char c1;
    // float marks;
public:
    void setName(string n)
    {
        name = n;
    }
    void setRoll(int myroll)
    {
        roll = myroll;
    }
    void getName()
    {
        cout << name << endl;
    }
    void getRoll()
    {
        cout << roll << endl;
    }
};
int main()
{
    Student *s1 = new Student;
    // Student s1;
    s1->setName("Amita");
    s1->setRoll(10);
    s1->getName();
    s1->getRoll();
}
// (*s1). roll =23;
// (*s1).marks = 3;
// cout << sizeof(s1);
// s1.name = 'Amita';
// s1.roll = 2;
// cout<< s1->name ;
