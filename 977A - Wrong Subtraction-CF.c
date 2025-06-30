//977A - Wrong Subtraction
#include <stdio.h>

int main ()
{
    int num, k;
    scanf("%d %d", &num, &k);
    
    while (k--)
    {
        int lasrDigit = num % 10;
        
        if (lasrDigit == 0)
        {
            num = num / 10;
        }
        else
        {
            num = num - 1;
        }
    }
    printf("%d", num);
    
    return 0;
}
