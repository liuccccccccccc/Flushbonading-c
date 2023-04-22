#include<stdio.h>
#include<stdlib.h>
int main()

{
   int a=getchar();//输入一个字符，返回值是int(字符的ASCII码值，如果获取没有正确输入，返回值是EOF)
   printf("%d\n",a);
   printf("%c\n",a);
   putchar(a);//输出单个字符


    system("pause");
    return 0;

}