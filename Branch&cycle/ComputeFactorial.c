#include <stdio.h>
#include <stdlib.h>
int Factorial(int n)
{
    int Value = 0;
    int i = n;
    for (Value = n - 1; Value >= 1; Value--)
    {
        i *= Value;
    }

    return i;
}
int main()
{
    int a;
    printf("请输入你要哪个数的阶乘:");
    scanf("%d", &a);
    int FactValue = Factorial(a);
    printf("%d!=%d\n", a, FactValue);
    system("pause");
    return 0;
}