#include<stdio.h>
#include<stdlib.h>
int maxnum(int a)//2815
{
    int max=a%10;
    while(a>9)
    {
        if(a%10>max)
        {
            max=a%10;
        }
        a/=10;
    }
    if(a>max)
    {
        max=a;
    }
    return max;
}
int maxSum(int* nums, int numsSize){
    int max=-1;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(maxnum(nums[i])==maxnum(nums[j]))
            {
                if(max<(nums[i]+nums[j]))
                {
                    max=nums[i]+nums[j];
                }
            }
        }
    }
    return max;


}
int main()
{
    int a[4]={71,17,42,24};
    printf("%d\n",maxSum(a,4));
    system("pause");
    return 0;
}