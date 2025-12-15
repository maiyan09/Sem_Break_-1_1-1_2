#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int score = min(abs(s[0] - 'a'), 26-abs('a' - s[0]));
    for (int i = 0; i < s.size() - 1; i++) {
        int d = abs(s[i+1] - s[i]);
        score += min(d, 26 - d);
    }
    cout << score << endl;
    return 0;
}
