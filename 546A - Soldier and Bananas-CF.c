//546A - Soldier and Bananas
#include <stdio.h>

int main()
{
    int k, n, w, sum = 0;
    scanf("%d %d %d", &k, &n, &w);
    
    for (int i = 1; i <= w; i++)
    {
        sum = sum + i*k;
    }

    int borrow = sum - n;
    if (borrow < 0)
    {
        borrow = 0;
    }

    printf("%d", borrow);
    

    return 0;
}
