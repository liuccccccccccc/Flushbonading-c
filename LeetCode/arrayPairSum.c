#include<stdint-gcc.h>
#include<stdlib.h>
#include<stdio.h>
//给定长度为 2n 的整数数组 nums ，你的任务是将这些数分成 n 对, 例如 (a1, b1), (a2, b2), ..., (an, bn) ，使得从 1 到 n 的 min(ai, bi) 总和最大。返回该 最大总和 
 int Cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
 }
int arrayPairSum(int* nums, int numsSize){
    int sum=0,i=0;
    qsort(nums,numsSize,4,Cmp);
    while(i<numsSize-1)
    {
        sum+=nums[i];
        i+=2;
    }
    return sum;



}
int main()
{
    int a[6]={3,4,1,6,6,0};
    printf("%d\n",arrayPairSum(a,6));
    system("pause");
    return 0;
}