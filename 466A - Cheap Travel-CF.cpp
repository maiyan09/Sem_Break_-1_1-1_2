#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cost1 = n*a;
    int cost2 = (n/m)*b + (n%m)*a;
    int cost3 = ((n/m)+1) * b;
    
    cout << min({cost1, cost2, cost3}) << endl;
}
/*
cost1 = single ride total cost
cost2 for Mix of both tickets
cost3 for if i buy all special ticket ->cost
*/
