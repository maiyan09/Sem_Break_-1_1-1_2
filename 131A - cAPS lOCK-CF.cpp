#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int checkUpper(int i, string s) {
    bool allUpperCase = true;
    while (s[i] != '\0') {
        if (!isupper(s[i])) {
            allUpperCase = false;
        }
        i++;
    }
    return allUpperCase;
}

void printString(string s) {
    int i = 0;
    while (s[i] != '\0')
    {
        if ((s[i] >= 'a' && s[i] <= 'z')) {
            s[i] = toupper(s[i]);
            cout << s[i];
        }
        else {
            s[i] = tolower(s[i]);
            cout << s[i];
        }
        i++;
    }    
}

int main() {
    string s;
    cin >> s;

    if ((checkUpper(0, s)) || ((s[0] >= 'a' && s[0] <= 'z') && (checkUpper(1, s)))) {
        printString(s);
    }
    else {
        cout << s << endl;
    }    
}
