#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        int digit = s[i] - '0';
        int newDigit = 9 - digit;
        if (i == 0 && digit == 9) continue;
        if (newDigit < digit)
            s[i] = '0' + newDigit;
    }
    cout << s << endl;
}
