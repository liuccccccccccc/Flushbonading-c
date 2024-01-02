#include<stdio.h>
#include<stdlib.h>
int maximumDifference(int* nums, int numsSize) {//2016
    int max=-1;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[j]>nums[i])
            {
                if(nums[j]-nums[i]>max)
                {
                    max=nums[j]-nums[i];
                }
            }
        }
    }
    return max;
    
    
}
int main()
{
    int a[4]={2,5,10,1};
    printf("%d\n",maximumDifference(a,4));
    system("pause");
    return 0;
}