#include<stdio.h>
#include<stdlib.h>
int maxProduct(int* nums, int numsSize) {//1464
    int max=nums[0],lo=0;
    for(int i=0;i<numsSize;i++)
    {
        if(max<nums[i])
        {
            max=nums[i];
            lo=i;
        }
    }
    nums[lo]=0;
    lo=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        if(lo<nums[i])
        {
            lo=nums[i];
        }
    }
    return (max-1)*(lo-1);
    
}
int main()
{
    int a[5]={1,2,35,19};
    printf("%d\n",maxProduct(a,5));
    system("pause");
    return 0;
}