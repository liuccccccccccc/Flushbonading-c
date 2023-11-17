#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)//1460
{
    return *(int *)a-*(int *)b;
}
int canBeEqual(int* target, int targetSize, int* arr, int arrSize) {
    qsort(target,targetSize,4,cmp);
    qsort(arr,targetSize,4,cmp);
    for(int i=0;i<targetSize;i++)
    {
        if(target[i]!=arr[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a[5]={1,2,3,4,5},b[5]={5,2,3,1,4};
    printf("%d\n",canBeEqual(a,5,b,5));
    system("pause");
    return 0;
}