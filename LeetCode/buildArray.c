#include<stdio.h>
#include<stdlib.h>
/**
 * Nreturned array must be malloced, assume caller calls free().
 */ 
int* buildArray(int* nums, int numsSize) {//1920、
    int *a=malloc(4*numsSize);
    for(int i=0;i<numsSize;i++)
    {
        a[i]=nums[nums[i]];
    }
    return a;
}
int main()
{
    int a[5]={4,3,2,1,0};
    int *c=buildArray(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",c[i]);
    }
    system("pause");
    return 0;
}