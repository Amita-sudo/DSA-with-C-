#include <iostream>
using namespace std;
class Amita
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void func(){
        a = 1;
        b = 2;
        c = 3;
        cout << a << b << c << endl;
    }
};

int main(){
    Amita obj;
    // External code i.e., outside of the class
    // obj.a;  note: declared private here
    // obj.b; note: declared protected here
    // obj.c; no error
    obj.func();
}