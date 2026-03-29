#include<iostream>
using namespace std;

class Human{
    // by default private
protected:
string name;
int  age, weight;
};

class Student : public Human{
int roll_no, fees;
void func(){
    name = "Amita";
}
};

int main(){
Student A;
// A.name = "Amita"; declared private here
// A.name = "Amita"; note: declared protected here
}
