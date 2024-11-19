#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter Order : ");
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        printf("[Row %d] Enter %d numbers : ", i + 1, m);
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Transpose of the Given Matrix :\n");
    for (int i = 0; i < m; i++)
    {
        printf("[");
        for (int j = 0; j < n; j++)
        {
            printf("%d", matrix[j][i]);
            if (j < n - 1)
                printf(" ");
        }
        printf("]\n");
    }

    return 0;
}