#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int distinct(set<int> s, int n) {
    return s.size();
}

int main() {
    int t; cin >> t;;
    while (t--) {
        int n; cin >> n;
        if (n % 3 == 0) {
            cout << n%3 << endl; 
        }
        else {
            int x = (n/3) + 1;
            cout << (3*x)-n << endl;
        }
    }
}
