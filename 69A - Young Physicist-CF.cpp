#include <iostream>
using namespace std;

int YoungPhysicist(int  arr[][3], int n){
    int sumX = 0, sumY = 0, sumZ = 0;
    for (int i = 0; i < n; i++)
    {
        sumX += arr[i][0];
        sumY += arr[i][1];
        sumZ += arr[i][2];
    }
    if (sumX == 0 && sumY == 0 && sumZ == 0)
        return 0;
    else
        return 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }  
    if (YoungPhysicist(arr, n)){
        cout <<"NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    return 0;
}
