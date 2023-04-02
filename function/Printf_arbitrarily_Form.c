#include<stdio.h>
#include<stdlib.h>


void Printf(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int b=1;b<=i;b++)
        {
          printf("%d*%d=%-2d ",i,b,i*b);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("请输入你打印到哪个数\n");
    scanf("%d",&n);
    Printf(n);
    system("pause");
    return 0;

}