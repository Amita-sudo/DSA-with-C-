#include <iostream>
using namespace std;

// Function to check palindrome
bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return original == reversed;
}

// Function to check repeated digits
bool hasRepeatedDigits(int n) {
    int digitCount[10] = {0};

    while (n > 0) {
        int digit = n % 10;
        digitCount[digit]++;

        if (digitCount[digit] > 1)
            return true;

        n /= 10;
    }

    return false;
}

int main() {
    int L, R;
    cin >> L >> R;

    bool found = false;

    for (int i = L; i <= R; i++) {

        if (i % 7 == 0 &&                // divisible by 7
            i % 5 != 0 &&                // not divisible by 5
            !isPalindrome(i) &&          // not palindrome
            !hasRepeatedDigits(i)) {     // no repeated digits

            cout << i << " ";
            found = true;
        }
    }

    if (!found)
        cout << -1;

    return 0;
}