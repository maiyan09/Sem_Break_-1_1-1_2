//112A - Petya and Strings
#include <stdio.h>
#include <ctype.h>

int main()
{
    char a[100];
    char b[100];

    scanf("%s", a);
    scanf("%s", b);

    int i = 0;

    while (a[i] != '\0' || b[i] != '\0')
    {
        char u = tolower(a[i]);
        char u1 = tolower(b[i]);

        /* Compearing each letter of the word that which letter comes first*/
        if (u < u1)
        {
            printf("-1");
            return 0;
        }
        else if (u > u1)
        {
            printf("1");
            return 0;
        }
        i++;
    }
    printf("0");


    return 0;
}
