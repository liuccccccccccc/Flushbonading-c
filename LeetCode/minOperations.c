#include<stdio.h>
#include<stdlib.h>//1827
int minOperations(int* nums, int numsSize){
    int count=0;
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]<=nums[i-1])
        {
            count+=(nums[i-1]+1-nums[i]);
            nums[i]=nums[i-1]+1;
        }
    }
    return count;

}
int main()
{
    int a[5]={4,2,1,6,0};
    printf("%d\n",minOperations(a,5));
    system("pause");
    return 0;
}