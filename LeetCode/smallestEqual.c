#include<stdio.h>
#include<stdlib.h>
int smallestEqual(int* nums, int numsSize) {//2057
    int min=-1;
    for(int i=numsSize-1;i>=0;i--)
    {
        if(i%10==nums[i])
        {
            min=i;
        }
    }
    return min;
    
    
}
int main()
{

    int a[4]={4,3,2,1};
    printf("%d\n",smallestEqual(a,4));
    system("pause");
    return 0;
}