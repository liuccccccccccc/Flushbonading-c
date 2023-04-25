#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//使用冒泡交换法，来判断一个字符串是否为另外一个字符串的翻转。//穷举法
int judgeSpin(char *a, char *b)
{
    int l = strlen(a);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l - 1; j++)
        {
            char temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
        if (strcmp(a, b) == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    char a[100], b[100];
    gets(a);
    gets(b);
    if (judgeSpin(a, b) == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    system("pause");
    return 0;
}