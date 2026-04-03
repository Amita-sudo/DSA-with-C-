#include <iostream>
using namespace std;
class Customer{
    // int total_customer = 0;
    static int total_customer ;
    string name;
    int acc_num, balance;
public:
    Customer(string name, int acc_num, int balance){
    this->name = name;   
    this->acc_num = acc_num;
    this->balance =  balance;
    total_customer++;
        }
        void dispaly(){
            cout<< name << " "<< acc_num << " "<< balance << " "<< total_customer<< endl;
        }
};
int Customer :: total_customer  = 0;
 int main(){
 Customer A1("AMITA", 1, 12345);
 Customer A2("mmmAMITA", 2, 133332345);
  Customer A3("mmmTA", 3,32345);
 A1.dispaly();
 A2.dispaly();
 A3.dispaly();
 }



