#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, max = 0;
    cin >> n;
    
    while (n--){
        int a, b;
        cin >> a >> b;
        
        sum = (sum - a) +b;
        if (sum > max){
            max = sum;
        }
    }
    cout << max << endl;

    return 0;
}
