#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = (k*l)/nl;
    int totalLime = c*d;
    int totalSalt = p/np;

    cout << min({totalDrink, totalLime, totalSalt}) / n << endl;
    return 0;
}
