#include<stdio.h>
#include<stdlib.h>
int  kLengthApart(int* nums, int numsSize, int k) {//1437
    int lo1,lo2,i=0;
    while(i<numsSize)
    {
        if(nums[i]==1)
        {
            lo1=i;
            break;
        }
        i++;
    }
    for(i=lo1+1;i<numsSize;i++)
    {
        if(nums[i]==1)
        {
            lo2=i;
            if(lo2-lo1-1<k)
            {
                return 0;
            }
            lo1=lo2;
        }
    }
    return 1;
}
int main()
{
    int a[7]={1,0,0,1,0,0,1};
    printf("%d\n",kLengthApart(a,7,2));
    system("pause");
    return 0;
}