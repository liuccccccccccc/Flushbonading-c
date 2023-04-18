#include <stdio.h>
#include <stdlib.h>
int triangle(int (*a)[100], int n)//使用二维数组打印杨辉三角
{
    for (int i = 0; i < n; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    if (n > 2)
    {
        for (int i = 2; i < n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }
    return 0;
}

void print(int (*a)[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    while (1)
    {

        int n;
        scanf("%d", &n);
        int T[n][100];
        triangle(T, n);
        print(T, n);
    }
    system("pause");
    return 0;
}