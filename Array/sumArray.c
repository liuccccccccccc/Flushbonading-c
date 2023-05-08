#include<stdio.h>
#include<stdlib.h>
int sumArray(int *a,int n)//函数的功能是计算数组之和，并且返回sum值
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main()
{
    int n=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d\n",sumArray(a,n));
    system("pause");
    return 0;

}