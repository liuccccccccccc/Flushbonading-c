#include<stdio.h>
#include<stdlib.h>
void  printfOddEven(int number)//分别打印整数二进制位的奇数部分和偶数部分
{
    int a[32];
    for(int i=0;i<32;i++)
    {
        a[i]=(number&1);
        number=number>>1;
    }
    for(int i=31;i>-1;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n偶数位：");
    for(int i=31;i>-1;i-=2)
    {
        printf("%d",a[i]);
    }
    printf("\n奇数位：");
     for(int i=30;i>-1;i-=2)
    {
        printf("%d",a[i]);
    }
}

int main()
{
    while(1)
    {
        int a;
        scanf("%d",&a);
        printfOddEven(a);
        
    }
    system("pause");
    return 0;
}