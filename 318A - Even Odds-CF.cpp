#include <iostream>
using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;

    long long int numbers = (n+1)/2;
    if (k <= numbers) {
        cout << 2*k - 1 << endl;
    }
    else {
        cout << 2*(k-numbers) << endl;
    }
}

