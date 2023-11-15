#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}
int canMakeArithmeticProgression(int* arr, int arrSize) {//1502
    qsort(arr,arrSize,4,cmp);
    int a=arr[1]-arr[0];
    for(int i=1;i<arrSize;i++)
    {
       if(arr[i]-arr[i-1]!=a)
       {
           return 0;
       }
    }
    return 1;

    
}
int main()
{
    int a[6]={1,3,7,9,11,5};
    printf("%d\n",canMakeArithmeticProgression(a,6));
    system("pause");
    return 0;
}