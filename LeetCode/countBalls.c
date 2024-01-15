#include<stdio.h>
#include<stdlib.h>
int cmp(const  void*a,const void *b)
{
    return *(int *)a-*(int *)b;
}
int countBalls(int lowLimit, int highLimit) {
    int n=highLimit-lowLimit+1,sum=0,temp;
    int a[n];
    for(int i=0;i<n;i++)
    {
        temp=lowLimit;
        sum=0;
        while(temp>9)
        {
            sum+=temp%10;
            temp/=10;
        }
        sum+=temp;
        a[i]=sum;
        lowLimit++;
    }
    qsort(a,n,4,cmp);
    temp=1;sum=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            sum++;
        }
        else
        {
            if(sum>temp)
            {
                temp=sum;
            }
            sum=1;
        }
    }
    if(sum>temp)
    {
        temp=sum;
    }
    return temp;
}
int main()
{
    printf("%d\n",countBalls(5,15));
    system("pause");
    return 0;
}