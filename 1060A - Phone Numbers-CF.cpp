#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <char> ch(n);
    int count8 = 0;
    for (int i = 0; i < n; i++) {
        cin >> ch[i];
        if (ch[i] == '8') count8++;
    }
    int ans = min(count8, n / 11);
    cout << ans << endl;

    return 0;
}
