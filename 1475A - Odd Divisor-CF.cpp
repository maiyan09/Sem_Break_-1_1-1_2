/*
A number n has no odd divisor greater than 1 only when n is a power of 2
If n is a power of 2 → NO
Else → YES
*/
#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long int num; cin >> num;
        if ((num & (num-1)) == 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
