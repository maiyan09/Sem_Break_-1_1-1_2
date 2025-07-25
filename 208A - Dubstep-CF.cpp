#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    //cout << s.length();
    int i = 0;
    while (s[i] != '\0') {
        if ((i == 0 || i == (s.length()-3)) && (s.substr(i, 3) == "WUB")) {
            i = i + 3;
        }
        else if (s.substr(i, 3) == "WUB") {
            cout << " ";
            i = i + 3;
        }
        else {
            cout << s[i];
            i++;
        }
    }
}
