#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v;
        int digit = 0;
        while (n > 0) {
            int rem = n % 10;
            if (rem != 0) {
                digit++;
            }
            v.push_back(rem);
            n /= 10;
        }
        cout << digit << endl;
        int power = 1;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] != 0) {
                cout << v[i]*power << " " << endl;
            }
            power *= 10;
        }
    }
}
/*
->push all non zero value into vector also count all non zero digit
->print every digit with power(1, 10, 100..)
*/
