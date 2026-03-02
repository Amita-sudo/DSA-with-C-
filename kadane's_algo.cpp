#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int maxi = INT_MIN;
    int prefix = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefix += arr[i];
        maxi = max(maxi, prefix);

        if (prefix < 0) {
            prefix = 0;
        }
    }

    return maxi;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxSubarraySum(arr);

    cout << "Maximum Subarray Sum is: " << result << endl;

    return 0;
}