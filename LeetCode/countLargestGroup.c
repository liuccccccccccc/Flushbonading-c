#include<stdio.h>
#include<stdlib.h>
int sum(int n)//1399
{
    int sum=0;
    while(n>9)
    {
        sum+=(n%10);
        n/=10;
    }
    sum+=n;
    return sum;
}
int countLargestGroup(int n) {
    int a[36]={0},max=0;
    for(int i=1;i<=n;i++)
    {
        a[sum(i)-1]+=1;
        if(max<a[sum(i)-1])
        {
            max=a[sum(i)-1];
        }
    }    
    int co=0;
    for(int i=0;i<36;i++)
    {
        if(a[i]==max)
        {
            co++;
        }
    }
    return co;
}
int main()
{
    printf("%d\n",countLargestGroup(13));
    system("pause");
    return 0;
}