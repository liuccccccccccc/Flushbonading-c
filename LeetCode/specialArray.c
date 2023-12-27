#include<stdio.h>
#include<stdlib.h>
int specialArray(int* nums, int numsSize){//1608
    int sum=0;
    for(int i=1;i<=numsSize;i++)
    {
        sum=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[j]>=i)
            {
                sum++;
            }
        }
        if(sum==i)
        {
            return i;
        }
        }
        return -1;

}
int main()
{
    int a[5]={0,4,3,0,5};
    printf("%d",specialArray(a,5));
    system("pause");
    return 0;
}