#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=3,b=5;//在不使用第三个变量的前提下，交换两个变量的值
    printf("a=%d\nb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;//这种方法，可能会因为a或者b的值过大，从而导致二进制位溢出
    printf("a=%d\nb=%d\n",a,b);
    int c=3,d=5;
    printf("c=%d\nd=%d\n",c,d);
    c=c^d;
    d=c^d;
    c=c^d;
    printf("c=%d\nd=%d\n",c,d);
   system("pause");
   return 0;

}