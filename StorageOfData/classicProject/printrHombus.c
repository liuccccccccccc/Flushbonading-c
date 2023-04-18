#include<stdio.h>
#include<stdlib.h>


void print(int n)//输入行数打印菱形
{
    int l=0,t;
    if(n%2==0)
    {
        l=n/2;t=l;
    }
    else
    {
        l=n/2+1;t=l-1;
    }
    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=(2*(l-1)+1)/2-(i-1);j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*(i-1)+1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=t;i>=1;i--)
    {
        for(int j=1;j<=(2*(l-1)+1)/2-(i-1);j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*(i-1)+1;k++)
        {
            printf("*");
        }
        printf("\n");

    }
    

}

int main()
{
    while(1){
    int a;
    scanf("%d",&a);
    print(a);}
    system("pause");
    return 0;
}