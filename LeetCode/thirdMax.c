#include<stdio.h>
#include<stdlib.h>

int thirdMax(int* nums, int numsSize){
    int max,min; 
    max=nums[0];
    min=nums[0];
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
    int count =0,M;
    while(1)
    {
        M=nums[0];
        for(int i=1;i<numsSize;i++)
        {
            if(nums[i]>M)
            {
                M=nums[i];
            }
        }
        count++;
        for(int i=0;i<numsSize;i++)
        {
            if(nums[i]==M)
            {
                nums[i]=min;
            }
        }
        if(M==min&&count<3)
        {
            return max;
        }
        if(count==3)
        {
            return M;
        }
    }

}
int main()
{
    int a[5]={1,2,3,5,5};
    printf("%d\n",thirdMax(a,5));
    system("pause");
    return 0;
}