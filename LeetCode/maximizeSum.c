#include<stdio.h>
#include<stdlib.h>
int maximizeSum(int* nums, int numsSize, int k){//2656
    int max=1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>max)
        {
            max=nums[i];
        }
    }
    int sum=0;
    for(int i=1;i<=k;i++)
    {
        sum+=max;
        max+=1;
    }
    return sum;

}
int main()
{
    int a[5]={1,2,5};
    printf("%d\n",maximizeSum(a,5,3));
    system("pause");
    return 0;
}