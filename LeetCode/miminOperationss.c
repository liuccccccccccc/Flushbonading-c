#include<stdio.h>
#include<stdlib.h>
int judge( int *a,int l)//2869
{
    for(int i=0;i<l;i++)
    {
        if(a[i]!=0)
        {
            return 0;
        }
    }
    return 1;
}
int minOperations(int* nums, int numsSize, int k){
    int a[k],count=0;
    for(int i=0;i<k;i++)
    {
        a[i]=i+1;
    }
    for(int i=numsSize-1;i>=0;i--)
    {   count++;
        for(int j=0;j<k;j++)
        {
            if(a[j]==nums[i])
            {
                a[j]=0;break;
            }
        }
       
        if(judge(a,k)==1)
        {
            return count;
        }
    }
    return 0;

}
int main()
{
    int a[5]={3,1,5,4,2};
    printf("%d\n",minOperations(a,5,2));
    system("pause");
    return 0;
}