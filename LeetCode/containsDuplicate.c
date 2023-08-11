#include<stdio.h>
#include<stdlib.h>
 int Cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
 }
int containsDuplicate(int* nums, int numsSize){//给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。
    qsort(nums,numsSize,4,&Cmp);//快排，回调函数
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            return 1;
        }

    }
    return 0;

}

int main()
{
    int a[4]={1,2,3,1};
    printf("%d\n",containsDuplicate(a,4));
    system("pause");
    return 0;
}