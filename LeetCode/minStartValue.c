#include<stdio.h>
#include<stdlib.h>
int minStartValue(int* nums, int numsSize){//1413
    int min=nums[0],sum=0;
    for(int i=0;i<numsSize;i++)
    {
        sum+=nums[i];
        if(min>sum)
        {
            min=sum;
        }
    }
    if(min>=0)
    {
        return 1;
    }
    return -min+1;

}
int main()
{
    int a[5]={-5,-10,1,2,3};
    printf("%d\n",minStartValue(a,5));
    system("pause");
    return 0;
}