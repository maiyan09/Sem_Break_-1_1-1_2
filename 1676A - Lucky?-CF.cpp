#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; i++) sum1 += s[i] - '0'; // " - '0' converts character digit to integer"
        for (int i = 3; i < 6; i++) sum2 += s[i] - '0';

        if (sum1 == sum2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
