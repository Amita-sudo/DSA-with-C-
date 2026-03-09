#include<iostream>
using namespace std;

class Customer{
string name;
int balance;
// static int counter;

public:
static int counter;// to access without object, only thru class
Customer( string name, int balance)
{
this->name = name;
this->balance = balance;
counter++;
}
static void print(){
    cout << counter << endl;

}

void display(){
    cout << name << ","<< balance << " and counter is: " << counter << endl;
}
};
int Customer :: counter = 0;

int main (){
    Customer a("Amita", 10000);
    a.display();
    Customer b("Bamita", 18900);
         b.display();
         Customer ::print();// can acccess only static variable
    return 0;
}

