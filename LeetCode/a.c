#include<stdio.h>
#include<stdlib.h>//1929
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *a=malloc(8*numsSize);
    for(int i=0;i<2*numsSize;i++)
    {
        if(i>=numsSize)
        {
            a[i]=nums[i-numsSize];
        }
        else
        {
            a[i]=nums[i];
        }
    }
    *returnSize=2*numsSize;
    return a;
}
int main()
{
    int c[4]={1,2,3,4};
    int l;
    int *d=getConcatenation(c,4,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d",d[i]);
    }
    system("pause");
    return 0;
}