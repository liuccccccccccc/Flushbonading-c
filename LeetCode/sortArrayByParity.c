#include<stdio.h>
#include<stdlib.h>//905,奇数偶数排序数组
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    int *c=malloc(4*numsSize);
    int ri=0,le=numsSize-1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]%2==0)
        {
            c[ri++]=nums[i];
        }
        else
        {
            c[le--]=nums[i];
        }
    }
    *returnSize=numsSize;
    return c;

}
int main()
{
    int l;
    int a[4]={3,1,2,4};
    int *A=sortArrayByParity(a,4,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",A[i]);
    }
    system("pause");
    return 0;
}