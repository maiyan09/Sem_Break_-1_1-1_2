#include <iostream>
using namespace std;

int main()
{
    long long int n, m, a, res;
    cin >> n  >> m >> a;
    
    if (n%a == 0){
        res = res + (n/a);
    }
    else{
        res = res + (n/a) + 1;
    }
    if (m%a == 0){
        res = res * (m/a);
    }
    else{
        res = res * ((m/a) + 1);
    }
    
    cout << res << endl;
    return 0;
}
