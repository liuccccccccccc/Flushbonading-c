#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    printf("adb\tcd\n");//转义字符会被识别转义，不能直接输出
    printf("abd\\tcv\\n");//转义字符\\(转义成\)可以将转义字符转义成正常字符输出
    printf("%d\n", strlen("c:\test\628\test.c"));//转义字符在计算长度时会被识别为一个长度
    system("pause");
    return 0;
}