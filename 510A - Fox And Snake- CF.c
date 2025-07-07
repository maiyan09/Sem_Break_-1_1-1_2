//510A - Fox And Snake
#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if(i % 2 != 0)
            {
               printf("#"); 
            }
            else if (j == col && i % 4 == 2)
            {
                printf("#");
            }
            else if (i % 4 == 0 && j == 1)
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
