#include<stdio.h>
#include<stdlib.h>
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize) {//1389
    int *a=malloc(numsSize*4);
    for(int i=0;i<numsSize;i++)
    {
        a[i]=-1;
    }
    for(int i=0;i<numsSize;i++)
    {
        if(a[index[i]]==-1)
        {
            a[index[i]]=nums[i];
        }
        else
        {
            for(int j=numsSize-1;j>index[i];j--)
            {
                a[j]=a[j-1];
            }
            a[index[i]]=nums[i];
        }
    }
    return a;
}
int main()
{
    int a[5]={5,6,7,8,9};
    int b[5]={0,1,2,2,1};
    int *c=createTargetArray(a,5,b,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",c[i]);
    }
    system("pause");
    return 0;
}