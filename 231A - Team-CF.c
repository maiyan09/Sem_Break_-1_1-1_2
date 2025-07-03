//231A - Team
#include <stdio.h>
 
int main()
{
    int n, p, v, t;
    scanf("%d", &n);
 
    int count = 0;
 
    while (n--)
    {
        scanf("%d %d %d", &p, &v, &t);
 
        if ((p+v+t) >= 2)
        {
            count++;
        }
    }
 
    printf("%d", count);
}
