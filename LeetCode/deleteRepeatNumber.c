#include<stdio.h>
#include<stdlib.h>


int removeElement(int* nums, int numsSize, int val)//删除出数组中的指定元素，不能够开辟新的空间，在本数组上修改
{
    int i=0;
    int count=0;
    if(numsSize==0)
    {
        return numsSize;
    }
    if(nums[numsSize-1]==val)
    {
        nums[numsSize-1]++;
        count++;
    }
    while(i<numsSize)
    {
        
        if(nums[i]==val)
        {
            count++;
            for(int a=i;a<numsSize-1;a++)
            {
                nums[a]=nums[a+1];
            }
        }
        else
        {
            i++;
        }
    }
    return numsSize-count;
}

int main()
{
    int a[]={1,2,3,4,5,7,8,9,0,1,2,3,1,1,1};
    int length=sizeof(a)/sizeof(int);
    int n=removeElement(a,length,1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}