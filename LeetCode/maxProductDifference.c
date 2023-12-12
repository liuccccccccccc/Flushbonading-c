#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)//1913
{
    return *(int *)a-*(int *)b;
}
int maxProductDifference(int* nums, int numsSize){
    qsort(nums,numsSize,4,cmp);
    return nums[numsSize-1]*nums[numsSize-2]-nums[0]*nums[1];
}
int main()
{
    int a[5]={1,2,3,4,5};
    printf("%d\n",maxProductDifference(a,5));
    system("pause");
    return 0;
}