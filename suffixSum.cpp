#include <iostream>
using namespace std;
int main (){
  int arr[] = {2,6,4,5,3,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int suffixSum[7];
    suffixSum[n-1] = arr[n-1];
    for (int i = n-2; i>= 0; i--){
        suffixSum[i] = suffixSum[i+1] + arr[i];
    }
    for (int i = 0; i<n ; i++){
        cout<< suffixSum[i] << endl;
    }
    return 0;
}