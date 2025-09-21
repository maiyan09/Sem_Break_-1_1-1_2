#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n; cin >> n;
    map<string, int> ch;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        ch[s]++;
    }
    int maximum = 0;
    for (auto i : ch) {
        if (i.second > maximum) {
            maximum = i.second;
            s = i.first;
        }
    }
    cout << s << endl;
}
