#include <iostream>
using namespace std;

// Count number of digits
int countDigit(int num) {
    if (num == 0) return 1;

    int count = 0;
    while (num) {
        num /= 10;
        count++;
        
    }
    return count;
}

// Check Armstrong number
bool armstrong(int num, int digits) {
    int n = num;
    int ans = 0;

    while (n) {
        int rem = n % 10;
                n /= 10;
        // calculate rem^digits using integer multiplication
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= rem;
        }

        ans += power;
    }

    return ans == num;
}

int main() {
    int num = 9474;

    int digits = countDigit(num);

    if (armstrong(num, digits))
        cout << "Armstrong number";
    else
        cout << "Not Armstrong";

    return 0;
}
