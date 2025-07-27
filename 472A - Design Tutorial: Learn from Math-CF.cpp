#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main() {
    int n; cin >> n;
    for (int i = 4; i <= n/2; i++) {
        for (int j = n; j >= n/2; j--) {
            if (j+i == n && !isPrime(i) && !isPrime(j)) {
                cout << i << " " << j;
                return 0;
            }
        }
    }
}
