#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, sum = 0, count = 0; cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.rbegin(), v.rend());
    int i = 0, sumB = v[i];
    while ((sumB <= (sum - sumB))) {
        count++;
        i++;
        sumB = sumB + v[i];
    }
    cout << count+1 << endl;
}
