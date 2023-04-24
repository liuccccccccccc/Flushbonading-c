#include <stdio.h>
#include <stdlib.h>
int serachNumber(int (*p)[3], int *x, int *y, int k) // 从一个行递增并且列也递增的二维数组里面查找一个数//这种方法时间复杂度小于o(n)
{
    int a = *x, b = *y;
    *x = 0;
    *y = b - 1;
    while ((*x) < a && (*y) >= 0)
    {
        if (p[*x][*y] < k)
        {
            (*x)++;
        }
        else if (p[*x][*y] > k)
        {
            (*y)--;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    while (1)
    {
        int x = 3, y = 3, k;
        scanf("%d", &k);
        int i = serachNumber(a, &x, &y, k);
        if (i == 1)
        {
            printf("行坐标为：%d\n列坐标为：%d\n", x + 1, y + 1);
        }
        else
        {
            printf("找不到\n");
        }
    }
    system("pause");
    return 0;
}