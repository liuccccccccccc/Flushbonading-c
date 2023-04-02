#include<stdio.h>
#include<stdlib.h>
int SplitNumberSum(int n)
{
    int sum=0;
    while(n>9)
    {
      sum+=n%10;
      n=n/10;
    }
    sum+=n;
    return sum;
}


int Recursion_SplitNumbersum(int n)
{
    if(n>9)
    {
        return (n%10)+Recursion_SplitNumbersum(n/10); 
    }

    return n;
}


int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",SplitNumberSum(n));
    printf("%d\n",Recursion_SplitNumbersum(n));
    system("pause");
    return 0;
}