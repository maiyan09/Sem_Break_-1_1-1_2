#include <iostream>
#include <vector>
using namespace std;

const int n = 1e7 + 10;
vector<bool> isPrime(n, true);

void sieve()
{
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= n; i++)
  {
    if (isPrime[i])
    {
      for (int j = 2 * i; j < n; j += i)
        isPrime[j] = false;
    }
  }
}

int main()
{
  sieve();
  int n;
  cin >> n;
  vector<long long> arr(n);
  for (long long i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (long long i = 0; i < n; i++)
  {
    long long sqr = sqrtl(arr[i]);
    if (isPrime[sqr] && (sqr * sqr) == arr[i])
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
/*
A number has exactly three positive divisors if and only if it's perfect square root is prime number
vector<bool> isPrime(n, true); // syntex: vector<Data_Type> Variable_Name(size, initial_value);
void sieve() // seive algo. to stole all prime number up tp n
*/
