#include <stdio.h>
#include <stdlib.h>
int IntegerCb(int *a, int number) // 求一个正整数的二进制序列
{
    int count = 0;
    while (number)
    {
        a[count] = number % 2;
        count++;
        number /= 2;
    }
    return count;
}
int main()
{
    int a[100], b;
    scanf("%d", &b);
    int i = IntegerCb(a, b) - 1;
    for (; i > -1; i--)
    {
        printf("%d", a[i]);
    }
    system("pause");
    return 0;
}