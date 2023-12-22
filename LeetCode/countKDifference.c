#include<stdio.h>
#include<stdlib.h>
int countKDifference(int* nums, int numsSize, int k) {//2006
    int count=0,c;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            c=nums[i]-nums[j];
            if(abs(c)==k)
            {
                count++;
            }
        }
    }
    return count;
    
}
int main()
{
    int a[5]={1,2,5,46,5};
    printf("%d\n",countKDifference(a,5,3));
    system("pause");
    return 0;
}