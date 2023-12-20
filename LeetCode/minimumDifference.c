#include<stdint-gcc.h>
#include<stdlib.h>
#include<stdio.h>
int cmp(const void *a,const void *b)//1984
{
    return *(int *)b-*(int *)a;
}
int minimumDifference(int* nums, int numsSize, int k) {
    qsort(nums,numsSize,4,cmp);
    int min=nums[0]-nums[numsSize-1];
    for(int i=0,j=k-1;i<=numsSize-k;i++,j++)
    {
        if(nums[i]-nums[j]<min)
        {
            min=nums[i]-nums[j];
        }
    }
    return min;
    
}
int main()
{
    int a[6]={4,2,44,6,3,9};
    printf("%d\n",minimumDifference(a,6,3));
    system("pause");
    return 0;
}