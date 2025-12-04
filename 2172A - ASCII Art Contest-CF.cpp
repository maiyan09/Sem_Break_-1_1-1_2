#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int minimum = min({a, b, c});
    int maximum = max({a, b, c});
    int middle = (a+b+c)-(maximum+minimum);
    if (maximum-minimum >= 10) {
        cout << "check again" << endl;
    }
    else {
        cout << "final "<< middle << endl;
    }

    return 0;
}
