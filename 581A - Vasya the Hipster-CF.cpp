#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int result1 = min(a, b);
    int result2 = abs(a-b) / 2;

    cout << result1 << " " << result2 << endl;
}
