#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int StringReversed(char *string)
{
    int b = strlen(string);
    for (int i = 0; i < b / 2; i++)
    {
        char temp;
        temp = string[i];
        *(string+i) = *(string+(b - (i + 1)));
        *(string+(b - (i + 1))) = temp;
    }
    return 0;
}

int Recusion_StringRversed(char *string)//使用递归进行字符串的逆序
{
    char temp=string[0];
    int  len=strlen(string);
    string[0]=string[len-1];
    string[len-1]='\0';//给下一次进入递归的字符串加一个结束标志，从而可以通过strlen函数来输出字符串的长度。
    if(strlen(string+1)>=2)//如果结束时长度等于0说明是字符有偶数个，如果长度等于1说明字符为奇数个
    {
       Recusion_StringRversed(string+1);
    }
    string[len-1]=temp;//从递归出口的那个函数开始执行，把当时递归函数中字符串的第一个元素的值赋给最后一个元素。从递归出口的那个函数开始，每当函数执行完毕，对应的栈空间销毁，然后回退到上一次递归函数执行这句，变量的值是对应的递归函数中的。
}

int main()
{
    char b[100];
    scanf("%s", b);
    Recusion_StringRversed(b);
    StringReversed(b);
    printf("%s\n", b);
    system("pause");
    return 0;
}