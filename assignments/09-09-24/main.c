#include <stdio.h>
int main()
{
    int a = 5;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a * 2 + 1; j++)
        {
            if (j >= a - i && j <= a + i)
            {
                int len = i * 2 + 1;
                if (j == a)
                {
                    printf(" %d ", len);
                }
                else if (j < a)
                {
                    printf(" %d ", len + j - a);
                }
                else
                {
                    printf(" %d ", len - j + a);
                }
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}