#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int res1 = a + b + c;
    int res2 = (a + b) * c;
    int res3 = a * (b + c);
    int res4 = (a * b) + c;
    int res5 = a + (b * c);
    int res6 = a * b * c;

    int maximumValue = max({res1, res2, res3, res4, res5, res6});
    cout << maximumValue << endl;
}
