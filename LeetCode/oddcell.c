#include <stdio.h>
#include <stdlib.h>

int oddCells(int m, int n, int (*indices)[2], int indicesSize, int *indicesColSize)//1252
{
    int a[m][n], count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < indicesSize; i++)
    {
        for (int q = 0; q < n; q++)
        {
            a[indices[i][0]][q] += 1;
        }
        for (int e = 0; e < m; e++)
        {
            a[e][indices[i][1]] += 1;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int in[2][2] = {{1, 0}, {1, 1}},a=2;
    printf("%d\n",oddCells(2,3,in,2,&a));
    system("pause");
    return 0;
}