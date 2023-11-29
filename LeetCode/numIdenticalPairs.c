#include<stdio.h>
#include<stdlib.h>
int numIdenticalPairs(int* nums, int numsSize) {//1512
    int count=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
        }
    }
    return count;
    
}
int main()
{
    int a[6]={1,2,3,2,2,1};
    printf("%d\n",numIdenticalPairs(a,6));
    system("pause");
    return 0;
}