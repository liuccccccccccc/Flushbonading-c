#include <stdio.h>
#include <stdlib.h>

int DichotomySearch(int a[], int k, int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high) // 当数组中没有要查找的数时，遍历到两个变量相等时相当于遍历了一半的数组，再查找下去就是low大于high，此时数组查询完毕，数组中没有要找的数字。
    {

        int mid = (high + low) / 2;
        if (k > a[mid])
        {
            low = mid + 1;
        }
        else if (k < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            return mid; // 如果等于，返回下标
        }
    }
    return -1;
}

int main()
{
    int a[100];
    int k = 0;
    int b = 0;
    printf("请输入数组的长度:");
    scanf("%d", &b);
    printf("请输入每个数\n");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("请输入你要查找的数\n");
    scanf("%d", &k);
    int temp = DichotomySearch(a, k, b);
    if (temp == -1)
    {
        printf("没有你要找的数\n");
    }
    else
    {
        printf("你要找的数的下角标为;%d\n", temp);
    }

    system("pause");

    return 0;
}