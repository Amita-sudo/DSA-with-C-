#include <iostream>
using namespace std;

int main (){

    int arr[] = {2,6,4,5,3,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int prefixArray[n];

    prefixArray[0] = arr[0];

    for (int i = 1; i < n; i++){
        prefixArray[i] = prefixArray[i-1] + arr[i];
    }

    for (int i = 0; i < n; i++){
        cout << prefixArray[i] << " ";
    }
}