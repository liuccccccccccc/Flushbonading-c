#include<stdio.h>
#include<stdlib.h>
int sumOfSquares(int* nums, int numsSize){//2778
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        if(numsSize%(i+1)==0)
        {
            sum+=nums[i]*nums[i];
        }
    }
    return sum;

}
int main()
{
    int a[4]={1,2,3,4};
    printf("%d\n",sumOfSquares(a,4));
    system("pause");
    return 0;
}