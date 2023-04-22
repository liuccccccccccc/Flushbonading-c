#include <stdio.h>
#include <stdlib.h>
int binSearch(int x, int v[], int n)
{
    int i = 0;
    while (v[i] != x)
    {
        if (i <= n - 1)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    return i;
}
int main()
{
    int array[100] = {0}, n = 0, x = 0;
    printf("请输入你创建数组的长度和你要查找的数字：");
    scanf("%d %d", &n, &x);
    printf("请依次输入数组中的元素\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int corner = binSearch(x, array, n);
    if (corner <= n - 1)
    {
        printf("你要查找的数是数组中第%d个，数值为%d\n", corner + 1, array[corner]);
    }
    else
    {
        printf("数组中查找不到你输入的数据\n点击任意键退出程序\n");
        system("pause");
        exit(0);
    }
    system("pause");
    return 0;
}