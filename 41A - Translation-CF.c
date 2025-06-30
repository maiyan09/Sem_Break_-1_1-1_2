//41A - Translation
#include<stdio.h>
#include <string.h>

int main()
{
    char s[110];
    scanf("%s", s);
    char t[110];
    scanf("%s", t);

    int lenghtT = strlen(t);
    int lenghtS = strlen(s);

    if (lenghtS != lenghtT)
    {
        printf("NO");
        return 0;
    }

    int i = 0, count = 0;
    while (s[i] != '\0')
    {
        if (s[i] == t[lenghtT-1]) 
        {
            count = 1;
        }
        else
        {
            printf("NO");
            return 0;
        }
        i++;
        lenghtT--;
    }
    if (count == 1)
    {
        printf("YES");
    }
    return 0;

}
