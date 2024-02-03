#include<stdio.h>
#include<stdlib.h>
int count(int n)//2843
{
    int num=1;
    while(n>9)
    {
        num++;
        n/=10;
    }
    return num;
}
int judge(int n,int num)
{
    int sum=0;
    for(int i=1;i<=num/2;i++)
    {
        sum+=n%10;
        n/=10;
    }
    for(int i=1;i<=num/2;i++)
    {
        sum-=n%10;
        n/=10;
    }
    if(sum==0)
    {
        return 1;
    }
    return 0;

}
int countSymmetricIntegers(int low, int high){
    int c=0,l;
    for(int i=low;i<=high;i++)
    {
        l=count(i);
        if(l%2==0)
        {
            if(judge(i,l)==1)
            {
                c++;
            }
        }
    }
    return c;

}
int main()
{
    printf("%d\n",countSymmetricIntegers(1,100));
    system("pause");
    return 0;
}