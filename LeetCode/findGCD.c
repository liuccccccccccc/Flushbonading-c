#include<stdint-gcc.h>
#include<stdlib.h>
#include<stdio.h>
int findGCD(int* nums, int numsSize) {//1979
    int max=nums[0],min=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>max)
        {
            max=nums[i];
        }
        if(nums[i]<min)
        {
            min=nums[i];
        }
    }
    for(int i=min;i>=1;i--)
    {
        if(max%i==0&&min%i==0)
        {
            return i;
        }
    }
    return 0;
    
}
int main()
{
    int a[5]={4,5,6,7,8};
    printf("%d\n",findGCD(a,5));
    system("pause");
    return 0;
}