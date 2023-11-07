#include<stdio.h>
#include<stdlib.h>
int* shuffle(int* nums, int numsSize, int n){//1470
    int i=0,j=numsSize-n,temp;
    while(i<2*n-2)
    {
        temp=nums[j];
        for(int k=j;k>i+1;k--)
        {
            nums[k]=nums[k-1];
        }
        nums[i+1]=temp;
        j++;
        i+=2;
    }
    return nums;
}
int main()
{
    int b[6]={1,2,3,4,5,6};
    int *a=shuffle(b,6,3);
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}