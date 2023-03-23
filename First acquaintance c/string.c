#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char string1[]="adbcd";//这种方式定义字符串，默认\0为字符串结尾。系统会以\0为字符串的结尾。
    char string2[]={'a','b','c'};//这种方式定义，不会默认有\0。
    char string3[]={'a','b','c','\0'};//定义时加上\0，给字符串结尾，系统才能识别到字符串在什么地址结束的。
    printf("%s\n%s\n%s",string1,string2,string3);//没有以\0为结尾的字符串，计算机会识别紊乱
    printf("%d\n%d\n%d",strlen(string1),strlen(string2),strlen(string3));//\0只作为字符串的结尾，不算字符串长度。
    system("pause");
    return 0;
}