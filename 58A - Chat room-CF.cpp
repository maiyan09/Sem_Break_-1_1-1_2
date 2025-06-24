#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string targetWord = "hello";
    int j = 0;

    for (char c : s) {
        if (c == targetWord[j]) {
            j++;
        }
        if (j == targetWord.size()) {
            break;
        }
    }

    if (j == targetWord.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
