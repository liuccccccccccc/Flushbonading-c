#include<stdio.h>
#include<stdlib.h>

//908.最小差值
int smallestRangeI(int* nums, int numsSize, int k){
    int max=nums[0],min=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]>max)
        {
            max=nums[i];
        }
        if(nums[i]<min)
        {
            min=nums[i];
        }
    }
    if((max-min)<=2*k)
    {
        return 0;
    }
    else
    {
        return (max-min-2*k);
    }

}
int main()
{
    int a[3]={1,2,10};
    printf("%d\n",smallestRangeI(a,3,3));
    system("pause");
    return 0;
}