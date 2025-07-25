#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    int totalGame = n*2;
    int arr[totalGame];
    for (int i = 0; i < totalGame; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < totalGame; i=i+2){
        for (int j = 1; j < totalGame; j=j+2){    
            if (arr[i] == arr[j]) count++;
        }   
    }
    cout << count << endl;
}
