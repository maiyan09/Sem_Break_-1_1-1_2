#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for (int i = 0; s[i] !='\0'; i++){
        if ((s[i] == '0' && s[i+1] == '0' && s[i+2] == '0' && s[i+3] == '0' && s[i+4] == '0' && s[i+5] == '0' && s[i+6] == '0') || (s[i] == '1' && s[i+1] == '1' && s[i+2] == '1' && s[i+3] == '1' && s[i+4] == '1' && s[i+5] == '1' && s[i+6] == '1')){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
