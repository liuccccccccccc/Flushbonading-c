#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    static int c[2];//使用static 延长数组的生命周期，否则函数调用完毕数组也跟着销毁，那么返回的地址就找不到对应的数组，无法输出。
    for(int i=0;i<numsSize-1;i++)
    {
        for(int b=i+1;b<numsSize;b++)
        {
            if(nums[i]+nums[b]==target)
            {
             
              c[0]=i;
              c[1]=b; 
              *returnSize=2;
              return c;
            }


        }
     
    }
    return c;
}
int main()
{
     int num[5]={1,2,3,4,5};
     int n=5;
     int length;
     int target=6;
     int *c=twoSum(num,n,target,&length);
     for(int i=0;i<length;i++)
     {
        printf("%d ",c[i]);
     }
     system("pause");
     return 0;


}