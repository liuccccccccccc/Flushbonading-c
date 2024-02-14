#include<stdio.h>
#include<stdlib.h>//2859
int countone(int a)
{
    int sum=0;
    while(a!=0)
    {
        if(a%2==1)
        {
            sum++;
        }
        a/=2;
    }
    return sum;
}
int sumIndicesWithKSetBits(int* nums, int numsSize, int k){
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        if(countone(i)==k)
        {
            sum+=nums[i];
        }
    }
    return sum;

}
int main()
{
    int a[4]={1,2,3,4};
    printf("%d\n",sumIndicesWithKSetBits(a,4,1));
    system("pause");
    return 0;
}