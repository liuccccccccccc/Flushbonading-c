#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=3;
    int b=2;
    int c=a<<1;//二进制左移一位；
    int d=b>>1;//二进制右移动一位，
    printf("a=%d,b=%d,c=a<<1=%d,d=b>>1%d,a=%d,b=%d\n",a,b,c,d,a,b);//移动不改变原来的值
    int e=a&b;//二进制取与  011&010=010
    int f=a|b;//二进制取或  011|010=011
    int g=a^b;//二进制异或，相同为零，不同为1 011^010=001
    printf("e=a&b=%d,f=a|b=%d,g=a^b=%d\n",e,f,g);
    system("pause");
    return 0;
}