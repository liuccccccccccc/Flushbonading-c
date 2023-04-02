#include<stdio.h>
#include<stdlib.h>
int Fib(int n)//利用递归求斐波那契数列的第n个值
{
    if (n>2)
    {
      return Fib(n-1)+Fib(n-2);
    }
    else
    {
        return 1;//利用斐波那契数列的第一个值和第二个值为1，作为递归的出口。
    }
}
int Fib_while(int n)//利用while循环求值
{
    int a=1,b=1,c=0;
    while(n>2)//第n个斐波那契数列值需要计算n-2次
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}
int main()
{
    int i;
    scanf("%d",&i);
    printf("%d \n",Fib_while(i));
    printf("%d \n",Fib(i));
    system("pause");
    return 0;
}