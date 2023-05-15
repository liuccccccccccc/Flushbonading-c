#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
char *myStrstr(const char *a, const char *b)
{
    assert(a&&b);
    const char *des = b;
    const char *temp = a;
    while (*b != '\0')//找到字符串的情况，当b字符串被遍历完，说明a字符串中能找到该字符串，循环结束，返回temp，保存了要找字符串的初始位置
    {
        if (*a == '\0')//未找到字符串的情况，当把第一个字符串遍历一遍，循环仍未结束，说明字符串a中不包含字符串b，
        {
            return NULL;
        }
        if (*a != *b)
        {
            a = temp;
            a++;
            b = des;
            temp = a;
        }
        else if (*a == *b)
        {
            a++;
            b++;
        }
    }
    return (char *)temp;
}
int main()
{
    while (1)
    {

        char a[100], b[100];
        gets(a);
        gets(b);
        char *i = myStrstr(a, b);
        // char *i=strstr(a,b);
        if (i == NULL)
        {
            printf("未找到\n");
        }
        else
        {
            printf("%s\n", i);
        }
    }
    system("pause");
    return 0;
}