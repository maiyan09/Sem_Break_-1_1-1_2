//71A - Way Too Long Words
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    int n;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%s", ch);
        if (strlen(ch) > 10)
        {
            int count = 0;
            for (int i = 1; i < strlen(ch)-1; i++)
            {
                count++;
            }
            printf("%c%d%c\n", ch[0], count, ch[strlen(ch)-1]);
        }
        else
        {
            printf("%s\n", ch);
        }
    }

    return 0;
}
