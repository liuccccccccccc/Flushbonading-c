#include<stdio.h>
#include<stdlib.h>
int* leftRightDifference(int* nums, int numsSize, int* returnSize){//2574
    int *a=malloc(4*numsSize);
    int lsum=0,rsum=0; 
    *returnSize=numsSize;
    for(int i=0;i<numsSize;i++)
    {
        lsum=0,rsum=0;
        for(int j=0;j<i;j++)
            {
                lsum+=nums[j];
            }
        for(int j=i+1;j<numsSize;j++)
        {
            rsum+=nums[j];
        }
        a[i]=abs(lsum-rsum);
    }
    return a;


}
int main()
{
    int a[5]={1,2,3,4,5};
    int l;
    int *b=(leftRightDifference(a,5,&l));
    for(int i=0;i<l;i++)
    {
        printf("%d ",b[i]);
    }
    system("pause");
    return 0;
}