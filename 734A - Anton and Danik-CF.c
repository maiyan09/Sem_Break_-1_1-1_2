//734A - Anton and Danik
#include<stdio.h>
#include <ctype.h>

int main()
{
    int n, Anton = 0, Danik = 0;
    scanf("%d", &n);
    
    char s[n];
    scanf("%s", s);
    
    int i = 0;
    while (s[i] != '\0')
    {
        char ch = toupper(s[i]);
        if (ch == 'A')
        {
            Anton++;
        }
        else
        {
            Danik++;
        }
        i++;
    }
    if (Anton > Danik)
    {
        printf("Anton");
    }
    else if (Anton < Danik)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
}
