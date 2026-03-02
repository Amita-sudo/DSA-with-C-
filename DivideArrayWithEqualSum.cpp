// #include <iostream>
// using namespace std;

// int main() {
//     int arr[8] = {3,4,-2,5,8,20,-10,8};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int totalSum = 0;
//     for (int i = 0; i < n; i++) {
//         totalSum += arr[i];
//     }

//     int prefixSum = 0;
//     bool found = false;

//     for (int i = 0; i < n - 1; i++) {
//         prefixSum += arr[i];
//         int suffixSum = totalSum - prefixSum;

//         if (prefixSum == suffixSum) {
//             found = true;
//             break;
//         }
//     }

//     if (found)
//         cout << "Yes";
//     else
//         cout << "No";

//     return 0;
// }

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
bool divide(vector<int>arr){
    int n = arr.size();
    int totalSum = 0;
    for (int i = 0; i<n ;i++){
        totalSum += arr[i];
            int prefixSum = 0;
    
for (int i = 0; i<n-1; i++){
prefixSum += arr[i];
int ans = totalSum - prefixSum;
if (ans == prefixSum){
    return 1;
}
}
}
return 0;
}
int main(){
    int n;
    cout<<"Enter size of array:"<<endl;
    cin >> n ;
    vector<int>v(n);
    cout<<"Enter elements" << endl;
    for( int i =0;i<n;i++){
        cin>>v[i];
    }
    cout<<divide(v);
}