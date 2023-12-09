#include<stdio.h>
#include<stdlib.h>
int sumOfUnique(int* nums, int numsSize) {//1748
    short a[100]={0},sum=0;
    for(int i=0;i<numsSize;i++)
    {
        a[nums[i]-1]+=1;
    }
    for(int i=0;i<100;i++)
    {
        if(a[i]==1)
        {
            sum+=i+1;
        }
    }
    return sum;
    
}
int main()
{
    int a[10]={1,2,3,4,5,1,4,7,9,5};
    printf("%d\n",sumOfUnique(a,10));
    system("pause");
    return 0;
}