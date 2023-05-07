#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Judge(char *a, char *b) // 使用库函数来判断一个字符串是否为另外一个字符串转置。例如：将字符串ABCD变成ABCDABCD，通过判断另外一个字符串是否为该字符串的子串并且长度是否字符串的长度来判断。
{
    strncat(a, a, strlen(a));                               // strncat追加字符串的内容。在a追加b字符串的前n个字；符
    if (strstr(a, b) != NULL && strlen(b) == strlen(a) / 2) // strstr函数用来返回字串b在字符串a中的首位置，如果不是找不到，就返回空。
    {
        return 1;
    }
    return 0;
}

int main()
{
    while (1)
    {
        char a[30];
        char b[10];
        gets(a), gets(b);
        if (Judge(a, b) == 1)
        {
            printf("是\n");
        }
        else
        {
            printf("不是\n");
        }
    }
    system("pause");
    return 0;
}