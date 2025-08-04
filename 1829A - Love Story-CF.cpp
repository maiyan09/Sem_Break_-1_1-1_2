#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int count = 0;
        string c = "codeforces";
        string s; cin >> s;
        for (int i = 0; i < 10; i++) {
            if (s[i] != c[i]) count++;
        }
        cout << count << endl;
    }
    return 0;
}
