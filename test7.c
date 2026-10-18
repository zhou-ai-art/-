#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    scanf_s(" %d%d", &m, &n);
    int a[10][10];
    int i = 0;
    int j = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s(" %d", &a[i][j]);
        }
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}