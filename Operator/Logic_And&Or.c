#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=0,b=1;
    int c=a++&&b++;//在与逻辑运算中，只要有0，表达式值就为0.因为a是0,所以表达式的值直接为0，不在进行后面的判断和计算，所以c=0，a=1,b=1
    printf("c=%d a=%d b=%d",c,a,b);
    a=0,b=1;
    int d=b++||a++;//在逻辑或运算中，只要有1，表达式的值就为1，因为b是1，所以表达式的值直接为1，不在进行后面的运算，所以d=1,b=2,a=0;
    printf("d=%d a=%d b=%d",d,a,b);
    system("pause");
    return 0;
}