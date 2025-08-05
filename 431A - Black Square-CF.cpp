#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[4], sum = 0;
    for (int i = 0; i < 4; i++) cin >> arr[i];

    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch == '1') sum += arr[0];
        else if (ch == '2') sum += arr[1];
        else if (ch == '3') sum += arr[2];
        else if (ch == '4') sum += arr[3];
    }
    cout << sum << endl;
}
