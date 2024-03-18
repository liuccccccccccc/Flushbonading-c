#include<stdio.h>
#include<stdlib.h>//猴子偷桃
int peach(int day)//倒推，公式为2*x+2
{
    if(day==1)
    {
        return 1;
    }
    return 2*peach(day-1)+2;
}
int main()
{
    printf("%d\n",peach(10));
    // int x=1534;
    // for(int i=1;i<=9;i++)
    // {
    //     x=x/2-1;       
    // }
    // printf("%d\n",x);
    system("pause");
    return 0; 
}