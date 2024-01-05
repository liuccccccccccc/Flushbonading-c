#include<stdio.h>
#include<stdlib.h>
int findFinalValue(int* nums, int numsSize, int original) {
    int f=0;
    while(1)
    {
        f=0;//2154
        for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==original)
        {
            f=1;
            original*=2;
            break;
        }
    }
    if(f==0)
    {
        break;
    }
    }
    
    return original;
}
int main()
{
    int a[5]={5,3,6,1,12};
    printf("%d\n",findFinalValue(a,5,3));
    system("pause");
    return 0;
}