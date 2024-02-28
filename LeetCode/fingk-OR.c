#include<stdbool.h>
#include<stdlib.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int findKOr(int* nums, int numsSize, int k) {
    int max=nums[0],num=0,sum=0;
    for(int i=0;i<numsSize;i++)
    {
        if(max<nums[i])
        {
            max=nums[i];
        }
    }
    int cou=0,n=0;
    while(max!=0)
    {
        cou++;
        max/=2;
    }
    for(int i=0;i<cou;i++)
    {
        num=0;
        for(int j=0;j<numsSize;j++)
        {
            n=pow(2,i);
            if((nums[j]&n)==n)
            {
                num++;
            }

        }
        if(num>=k)
        {
            sum+=pow(2,i);
        }
    }
    return sum;
    
}
int main()
{
    int a[6]={7,12,9,8,9,15};
    printf("%d\n",findKOr(a,6,4));
    system("pause");
    return 0;
}