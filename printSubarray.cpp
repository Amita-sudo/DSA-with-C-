#include <iostream>
using namespace std;

int main(){
    int arr[4] = {4,3,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            
            for(int k = start; k <= end; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}