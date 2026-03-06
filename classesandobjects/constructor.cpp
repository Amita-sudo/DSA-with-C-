#include <iostream>
using namespace std;
class Customer {
    public:
    string name;
    int rollno;
    //default constructor
    Customer(){
        name = "Amita";
        rollno = 1;
    }
            //Parametrized Constructor
    Customer(string name, int rollno){
       this-> name = name;
        this->rollno = rollno;
    }
    void dispaly(){
        cout << name << " and " << rollno << endl;
    }
    // user made copy consstructor
    Customer(Customer &B){
        name = B.name;
        rollno = B.rollno; 
    }
    
};
int main(){
    Customer c1;
    Customer c2("amita2", 2);
    Customer c3("Amita3", 3);
    c1.dispaly();
    c2.dispaly();
    c3.dispaly();
    Customer c4(c3);// default copy cnstructor
    c4.dispaly();
    return 0;
}