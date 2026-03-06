#include <iostream>
using namespace std;
class Customer{
    string name;
    int *rollno;
    public:
     Customer(string name){
        this ->name = name; 
        cout <<"Constructor"<< name << endl;
     }
     ~Customer(){// no parameter.. created only once
        cout<< "Destructor" << name << endl;
     }
};
int main(){
    Customer c1("1");
    Customer c2("2");
    Customer c3("3");
    Customer *c4 = new Customer("4");
        delete c4;   // important to call destructor
    return 0;
}