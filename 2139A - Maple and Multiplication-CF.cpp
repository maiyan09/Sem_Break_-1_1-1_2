#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;

        int minimum = min(a, b);
        int maximum = max(a, b);

        if (a == b) cout << "0" << endl;
        else if (maximum%minimum == 0) cout << "1" << endl;
        else cout << "2" << endl;
    }
}
/*
output dekhle e logic bujte parba! 
*/
