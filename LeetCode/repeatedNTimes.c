#include<stdio.h>
#include<stdlib.h>//961;
int repeatedNTimes(int* nums, int numsSize){
    // qsort(nums,numsSize,4,cmp);
    // for(int i=1;i<numsSize;i++)
    // {
    //     if(nums[i]==nums[i-1])
    //     {
    //         return nums[i];
    //         break;
    //     }
    // }
    // return 0;
    if(nums[0]==nums[numsSize-1])
    {
        return nums[0];
    }
    for(int i=2;i<numsSize;i++)
    {
        if(nums[i]==nums[i-1]||nums[i]==nums[i-2])
        {
            return nums[i];
        }
    }
    return 0;
}
int main()
{
    int a[6]={1,2,3,4,4,4};
    printf("%d\n",repeatedNTimes(a,6));
    system("pause");
    return 0;
}