#include <stdio.h>
#include <stdlib.h>
int Max(int a, int b)
{
    int temp = 0;
    if (a >= b)
    {
        temp = b;
    }
    else
    {
        temp = a;
    }
    while (!(a % temp == 0 && b % temp == 0))
    {
        temp--;
    }
    return temp;
}
int main()
{
    int a, b;
    printf("请输入你要求那个数的最大公约数\n");
    scanf("%d %d", &a, &b);
    int max = Max(a, b);
    printf("最大公约数为：%d\n", max);
    system("pause");
    return 0;
}