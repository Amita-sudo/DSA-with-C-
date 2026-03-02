// #include <iostream>
#include <iostream>
using namespace std;
// int main() {
//     char c = -1;
//     if (c < 0)
//         cout<<"char is signed";
//     else
//         cout<<"char is unsigned";
// }

// for (char c = 'a'; c<='z'; c++)
// {
//     cout<< c<<' ';
// }
// for (int i = 10 ; i>0 ; i--){
//     cout << i << ' ';
// }
// for (int i = 1 ; i<=100 ; i+=3){
//     cout << i << ' ';
// }
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // cout << "Multiplication table of " << n << ":\n";

    // for (int i = 0; i <= 10; i++) {
    //     cout << n << " * " << i << " = " << n * i << endl;
    // }
// int fact =  1;
// for (int i = 1 ; i<=n ; i++){
//     fact=fact*i;
// }
// cout << fact;
// int count = 0;
// for(int i = 2; i<n ; i++){
//     if (n % i == 0){
//         count+=1;
//     }
//     }
//  if (count >0){
//         cout<<"Composite";
//     }
//     else {
//         cout<< "Prime";
//     }
int last = 0;
int pre = 1;
  cout  << last << " " << pre << " ";
 int curr;
for ( int i = 2; i<n ; i++){
    curr = last + pre;
    last = pre;
    pre = curr;
    cout << curr;
}
    return 0;}

//add 1st comment
// add 2nd comment