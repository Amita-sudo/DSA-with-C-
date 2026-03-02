#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
vector <int> a ;
int main(){
a.push_back(2);
a.push_back(3);
a.push_back(4);
a.push_back(5);
a.push_back(5);
a.push_back(5);
// a.begin();
// a.end();
// for (auto it = a.begin(); it<a.end() ; it++ ){
// cout << *it << " " ;
// }
// for ( int i = 0; i<a.size() ; i++){
//     cout  << a[i]<< endl;
// }
sort(a.begin(), a .end());
for ( int i : a){
    cout  << i << endl ;
 } 
}