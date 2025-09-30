#include <iostream>
#include <set>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set <int> s;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0) s.insert(i);
        if (i % l == 0) s.insert(i);
        if (i % m == 0) s.insert(i);
        if (i % n == 0) s.insert(i);
    }
    cout << s.size() << endl;
}
/*
input: 2,3,4,5,24
Frying pan: every 2nd dragon → 2, 4, 6, 8, 10, ..., 24
Balcony door: every 3rd dragon → 3, 6, 9, 12, ..., 24
....
Now count unique dragons damaged. We'll use a set to track all dragons that got any damage.
*/

