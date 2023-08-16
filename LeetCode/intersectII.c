#include<stdio.h>
#include<stdlib.h>
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int *a=malloc(4*nums1Size);//给你两个整数数组 nums1 和 nums2 ，请你以数组形式返回两数组的交集。返回结果中每个元素出现的次数，应与元素在两个数组中都出现的次数一致（如果出现次数不一致，则考虑取较小值）。可以不考虑输出结果的顺序。
    int count=0;
    for(int i=0;i<nums1Size;i++)
    {
        for(int j=0;j<nums2Size;j++)
        {
            if(nums1[i]==nums2[j])
            {
                a[count++]=nums1[i];
                nums2[j]=-1;
                break;
            }
        }
    }
    *returnSize=count;
    return a;

}
int main()
{
    int t;
    int a[5]={1,2,3,3,5};
    int b[4]={1,3,3,3};
    int *d=intersect(a,5,b,4,&t);
    for(int i=0;i<t;i++)
    {
        printf("%d ",d[i]);
    }
    system("pause");
    return 0;
}