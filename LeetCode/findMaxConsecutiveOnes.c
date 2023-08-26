#include<stdio.h>
#include<stdlib.h>
int findMaxConsecutiveOnes(int* nums, int numsSize){
    int count=0,max=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==1)
        {
            count++;
        }
        else
        {
            if(count>max)
            {
                max=count;
            }
            count=0;
        }
    }
    if(count>max)
    {
        max=count;
    }
    return max;

}
int main()
{
    int a[7]={1,1,0,1,1,1,1};
    int num=findMaxConsecutiveOnes(a,7);
    printf("%d\n",num);
    system("pause");
    return 0;
}