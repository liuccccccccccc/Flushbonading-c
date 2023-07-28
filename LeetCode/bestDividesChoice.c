#include<stdio.h>
#include<stdlib.h>
int min(int a,int l)
{
    int min=a>l?l:a;
    return min;
}
int max(int a,int b)
{
    int max=a>b?a:b;
    return max;
}
int maxProfit(int* prices, int pricesSize){
    int Max=0;
    int Min=prices[0];
    for(int i=1;i<pricesSize;i++)
    {
        Max=max(Max,prices[i]-Min);
        Min=min(Min,prices[i]);
        
    }
    return Max;

}
int main()
{
    int a[5]={1,2,3,4,5};
    int v=maxProfit(a,5);
    printf("%d\n",v);
    system("pause");
    return 0;
}