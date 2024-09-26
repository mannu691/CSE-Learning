#include <stdio.h>
int main()
{
    int a = 2;

    for (int i = 0; i < a; i++)
    {        
        for (int j = 0; j < a * 2 + 1; j++)
        {
            int len = i*2+1;
            if (j==a+1-len)
            {
                printf("1");
                // if (j == i)
                // {
                //     printf("%d ", l2);
                // }
                // else if (j < i)
                // {
                //     printf("%d ", i + j + 1);
                // }
                // else
                // {
                //     printf("%d ", i - j - 1);
                // }
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}