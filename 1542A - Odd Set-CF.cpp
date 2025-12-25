#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        int countOdd = 0, countEven = 0;
        for (int i = 0; i < 2*n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 != 0) countOdd++;
            else countEven++;
        }
        if (countEven == n && countOdd == n)
            cout << "Yes\n";
        else
            cout << "No\n";

    }
    return 0;
}
