#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int count = n/2;
    cout << count << endl;
    if (n % 2 == 0) {
        for (int i = 1; i <= count; i++) {
            cout << "2 ";
        }
    }
    else {
        for (int i = 1; i < count; i++) {
            cout << "2 ";
        }
        cout << "3";
    }
    cout << endl;
}
/*
if n is odd add all 2 but last element 3;
11 -> 2 2 2 2 3
*/
