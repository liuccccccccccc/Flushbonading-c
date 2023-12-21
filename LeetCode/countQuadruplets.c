#include<stdio.h>
#include<stdlib.h>
int countQuadruplets(int* nums, int numsSize) {//1995
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            for(int z=j+1;z<numsSize;z++)
            {
                for(int k=z+1;k<numsSize;k++)
                {
                    if(nums[i]+nums[j]+nums[z]==nums[k])
                    {
                        sum++;
                    }
                }
            }
        }
    }
    return sum;
    
}
int main()
{
    int a[5]={1,1,1,3,5};
    printf("%d\n",countQuadruplets(a,5));
    system("pause");
    return 0;
}