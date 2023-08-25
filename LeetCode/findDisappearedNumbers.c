#include<stdio.h>
#include<stdlib.h>
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
    int *c=malloc(numsSize*4);//给你一个含 n 个整数的数组 nums ，其中 nums[i] 在区间 [1, n] 内。请你找出所有在 [1, n] 范围内但没有出现在 nums 中的数字，并以数组的形式返回结果。
    int a[numsSize],count=0;
    for(int i=0;i<numsSize;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<numsSize;i++)
    {
        a[nums[i]-1]+=1;
    }
    for(int i=0;i<numsSize;i++)
    {
        if(a[i]==0)
        {
            c[count++]=i+1;
        }

    }
    *returnSize=count;
    return c;
    

}

int main()
{
    int a[10]={1,2,3,4,5,5,7,8,10,10};
    int l;
    int *b=findDisappearedNumbers(a,10,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",b[i]);
    }
    system("pause");
    return 0;
}