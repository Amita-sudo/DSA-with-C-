#include <iostream>
using namespace std;
#include <vector>
vector <int> a ;
int main(){
a.push_back(2);
a.push_back(3);
a.push_back(4);
a.push_back(5);
a.pop_back();
a.erase(a.begin()+2);
int ret =  a.front();
int ret_last =  a.back();
cout << ret  << endl ;
cout << ret_last  << endl ;
int isEmpty = a.empty();
cout << isEmpty << endl ;
int myret =  a.at(0);
cout << myret << endl ;
for (int i : a) {
        cout << i << " ";
    }

    return 0;
}
