#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>//2239
int findClosestNumber(int* nums, int numsSize) {
    int temp=nums[0];
    int min=abs(nums[0]);
    for(int i=0;i<numsSize;i++)
    {
        if(abs(nums[i])<min)
        {
           min=abs(nums[i]);
           temp=nums[i];
        }
        else if(abs(nums[i])==min&&nums[i]>0)
        {
            temp=nums[i];
        }
    }
    return temp;
}
int main()
{
    int a[3]={2,1,-1};
    printf("%d\n",findClosestNumber(a,3));
    system("pause");
    return 0;
}