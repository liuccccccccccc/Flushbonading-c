#include<stdio.h>
#include<stdlib.h>
int* runningSum(int* nums, int numsSize, int* returnSize){//1480
    for(int i=1;i<numsSize;i++)
    {
       nums[i]+=nums[i-1];
    }
    *returnSize=numsSize;
    return nums;
}
int main()
{
    int l;
    int a[6]={1,5,1,88,100,0};
    int *d=runningSum(a,6,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",d[i]);
    }
    system("pause");
    return 0;
}