#include<stdio.h>
#include<stdlib.h>
int majorityElement(int* nums, int numsSize){//给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
    int count=0,flag=0;
    for(int i=0;i<numsSize;i++)
    {   flag=0;
        for(int k=0;k<i;k++)
        {
            if(nums[i]==nums[k])
            {
               flag=1; break;
            }
        }
        count=0;
        if(flag==0)
        {
             for(int j=0;j<numsSize;j++)
        {
           
            if(nums[i]==nums[j])
            {
                count++;
            } 
            if(count>numsSize/2)
            {
                return nums[i];
             }
        }
        }
       
       
    }
    return 0;

}
int main()
{
    int a[5]={1,1,4,5,1};
    int v=majorityElement(a,5);
    printf("%d\n",v);
    system("pause");
    return 0;
}