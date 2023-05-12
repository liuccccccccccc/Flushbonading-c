#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int MyStrlen1(const char *a) // 实现库函数strlen，
{
    assert(a != NULL);
    int i = 0;
    while (*(a++) != '\0')
    {
        i++;
    }
    return i;
}
int Mystrlen2(const char *a) // 递归实现strlen库函数
{
    assert(a != NULL);
    if (*a == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + Mystrlen2(a + 1);
    }
}

int main()
{
    char a[] = "abcdef";
    printf("%d %d\n", MyStrlen1(a), Mystrlen2(a));
    if (strlen("123") - strlen("1234") > 0) // 输出结果为1，因为库函数的返回值为无符号数，3+（-4）负数会被隐式转换为一个很大的无符号数，结果大于0
    {
        printf("1\n");
    }
    else
    {
        printf("2\n");
    }
    if (MyStrlen1("123") - Mystrlen2("1234") > 0) // 输出结果为2，自己写的返回值有符号，会正常的加减
    {
        printf("1\n");
    }
    else
    {
        printf("2\n");
    }
    system("pause");
    return 0;
}