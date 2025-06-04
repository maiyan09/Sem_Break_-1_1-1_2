#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int i = 0;
    while (s[i] != '\0'){
        char ch = tolower(s[i]);
        if(!(ch=='a'|| ch == 'e' || ch=='i'|| ch == 'o' || ch=='u' || ch=='y')){
            cout << "." << ch;
        }
        i++;
    }

    return 0;
}
