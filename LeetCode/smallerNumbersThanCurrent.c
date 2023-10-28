#include<stdio.h>
#include<stdlib.h>
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    int *a=malloc(numsSize*4);//1365
    int co;
    for(int i=0;i<numsSize;i++)
    {
        co=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]>nums[j])
            {
                co++;
            }
        }
        a[i]=co;
    }
    *returnSize=numsSize;
    return a;
}
int main()
{
    int c[5]={5,7,1,0,111},l=0;
    int *a=smallerNumbersThanCurrent(c,5,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}