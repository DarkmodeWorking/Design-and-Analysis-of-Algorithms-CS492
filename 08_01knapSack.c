#include <stdio.h>
int max(int, int);
void main()
{
    int profit[5] = {0, 3, 4, 5, 6};
    int weight[5] = {0, 2, 3, 4, 5};
    int i, j, w, m = 5, n = 4;
    int p[5][6];
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= m; w++)
        {
            if (i == 0 || w == 0)
                p[i][w] = 0;
            else if (weight[i] <= w)
                p[i][w] = max(profit[i] + p[i - 1][w - weight[i]], p[i - 1][w]);
            else
                p[i][w] = p[i - 1][w];
        }
    }
    printf("%d\n", p[n][w - 1]);

    i = n;
    j = m;

    while (i > 0 && j >= 0)
    {
        if (p[i][j] == p[i - 1][j])
        {
            printf("%d=0\n", i);
            i--;
        }
        else
        {
            printf("%d=1\n", i);
            j = j - weight[i];
            i--;
        }
    }
}
int max(int x, int y)
{
    return ((x > y) ? x : y);
}
