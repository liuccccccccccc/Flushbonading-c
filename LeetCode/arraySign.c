#include<stdio.h>
#include<stdlib.h>
int arraySign(int* nums, int numsSize) {//1822
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
        {
            return 0;
        }
        else if(nums[i]<0)
        {
            sum++;
        }
    }
    if(sum%2==0)
    {
        return 1;
    }
    return -1;
    
}
int main()
{
    int a[5]={1,2,3,-1,6};
    printf("%d",arraySign(a,5));
    system("pause");
    return 0;
}