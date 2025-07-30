#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long int a, b;
        cin >> a >> b;
        long int res = abs(a-b);
        long int step = (res/10);
        long long int rem = res % 10;
        if (rem < 10 && rem > 0) step++;
        cout << step << endl; 
    }
}
