#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)//1122
{
    return *((int *)a)-*((int *)b);
}
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize){
    
    int cout=0,temp;
    for(int i=0;i<arr2Size;i++)
    {
        for(int j=0;j<arr1Size;j++)
        {
            if(arr2[i]==arr1[j])
            {
                temp=arr1[j];
                arr1[j]=arr1[cout];
                arr1[cout++]=temp;
            }
        }
    }
    qsort(arr1+cout,arr1Size-cout,4,cmp);
    *returnSize=arr1Size;
    return arr1;
    

}
int main()
{
    int a1[5]={3,2,5,9,10},a2[3]={10,9,5};
    int l;
    int *a=relativeSortArray(a1,5,a2,3,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}