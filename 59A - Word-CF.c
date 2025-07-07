//59A - Word
#include <ctype.h>
#include <stdio.h>

int main()
{
    char s[100];
    scanf("%s", s);
    
    int upperCase = 0, lowerCase = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lowerCase++;
        }
        else
        {
            upperCase++;
        }
        i++;
    }
    if (upperCase == lowerCase || lowerCase > upperCase)
    {
        int j = 0;
        while (s[j] != '\0')
        {
            printf("%c", tolower(s[j]));
            j++;
        }
    }
    else if (upperCase > lowerCase)
    {
        int j = 0;
        while (s[j] != '\0')
        {
            printf("%c", toupper(s[j]));
            j++;
        }
    }

    return 0;
}
