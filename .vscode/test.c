#include<stdio.h>
#include<stdlib.h>
int count(int a,int b)
{
    int sum;
    sum = a+b;
    return sum;

}
int main ()
{
    int a,b;
    printf("请输入两个加数的值\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int c=count(a,b);
    printf("和为：%d\n",c);
    system("pause");
    return 0;
}
