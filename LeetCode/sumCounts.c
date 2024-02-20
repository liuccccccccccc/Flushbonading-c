#include<stdio.h>
#include<stdlib.h>//2913
int diff(int *a,int l)
{   int sum=0;
    int c[100]={0};
    for(int i=0;i<l;i++)
    {
        c[a[i]-1]++;
    }
    for(int i=0;i<100;i++)
    {
        if(c[i]!=0)
        {
            sum++;
        }
    }
    return sum;
}
int sumCounts(int* nums, int numsSize){
    int a=0,k;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i;j<numsSize;j++)
        {
            int k=diff(nums+i,j-i+1);
            a+=k*k;
        }
    }
    return a;

}
int main()
{
    int a[3]={1,2,1};
    printf("%d\n",sumCounts(a,3));
    system("pause");
    return 0;
}