#include <iostream>
using namespace std;
class Area{
public:
int calcArea(int r){
return 3.14*r*r;
}
int calcArea(int l, int b){
return l*b;
}
};

int main(){
    Area A1;
  float circleArea =   A1.calcArea(2);
  float rectangleArea=  A1.calcArea(2,2);
  cout << circleArea << endl;
  cout << rectangleArea;
}