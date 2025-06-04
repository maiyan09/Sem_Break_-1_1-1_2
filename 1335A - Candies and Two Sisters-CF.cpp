#include <stdio.h>

int main()
{
  	long long int n, t;
    scanf("%lld", &t);
	  while (t--)
	  {
	    long long count = 0;
	    scanf("%lld", &n);	
		  for (long int i = n-1; i > n/2; i--)
		  {
			  count++;
		  }
		  printf("%lld\n", count);
	}

	return 0;
}
