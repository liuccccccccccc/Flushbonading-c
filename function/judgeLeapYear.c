#include<stdio.h>
#include<stdlib.h>

int judge_Leap(int year)
{
   if(year%4==0&&year%100!=0)
   {
    return 1;
   }
   else if(year%400==0)
   {
    return 1;
   }
   else
   {
    return 0;
   }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
       int bool = judge_Leap(i);
       if(bool==1)
       {
        printf("%d ",i);
       }
    }
    system("pause");
    return 0;
}