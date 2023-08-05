#include <stdio.h>
#include <stdlib.h>
int *getRow(int rowIndex, int *returnSize)
{ // 给定一个非负索引 rowIndex，返回「杨辉三角」的第 rowIndex 行
    int temp[rowIndex + 1][rowIndex + 1];
    *returnSize = rowIndex + 1;
    int *returnA = malloc(4 * (rowIndex + 1));
    returnA[0] = 1;
    returnA[rowIndex] = 1;
    for (int i = 0; i <= rowIndex; i++)
    {
        temp[i][0] = 1;
        temp[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            temp[i][j] = temp[i - 1][j - 1] + temp[i - 1][j];
            returnA[j] = temp[i][j];
        }
    }
    return returnA;
}

int main()
{
    int num = 0;
    int *a = getRow(10, &num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", a[i]);
    }
    system("pause");
    return 0;
}