#include<stdio.h>
#include<stdlib.h>


int Add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}

int main()
{
    int sum1 ,sum2;
    int i=0;
    printf("如果输入两个数的和为2，就可执行if_while程序\n");
    scanf("%d %d",&sum1,&sum2);
    int sum=Add(sum1,sum2);
    if(sum==2)
    {
        while(i<10)
        {
            printf("恭喜你打开隐藏程序\n");
            i++;
        }
    }


    else
    {
       printf("抱歉，你输入的和不为2\n");
    }
    system("pause");
    return 0;
}