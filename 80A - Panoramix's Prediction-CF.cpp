#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n, int m) {
    for (int i = n+1; i <= m; i++) {
        bool p = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                p = false;
                break;
            }
        }
        if (p) {
            if (i==m) return true;
            else return false;
        }
    }
    return false;
}

int main() {
    int n, m; cin >> n >> m;
    if (isPrime(n, m)) cout << "YES" << endl;
    else cout << "NO" << endl;

}
