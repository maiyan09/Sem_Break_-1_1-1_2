#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int freePolice = 0, untreatedCrime = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > 0) freePolice += v[i];
        else {
            if (freePolice > 0) freePolice--;
            else untreatedCrime++;
        }
    }
    cout << untreatedCrime << endl;
}
