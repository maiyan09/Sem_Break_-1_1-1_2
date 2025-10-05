#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x, count = 0; cin >> x;
    while (x > 0) { // any numbber to binary conversionn
        long long b = x % 2;
        if (b == 1) {
          
            count++;
        }
        x /= 2;
    }
    cout << count << endl;
}
/*
The number of 1 in the binary representation of x equals the minimum number of bacteria you need to add.
*/
