#include<stdio.h>
#include<stdlib.h>//1619
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}
double trimMean(int* arr, int arrSize) {
    qsort(arr,arrSize,4,cmp);
    int c=0.05*arrSize;
    double sum=0;
    for(int i=c;i<arrSize-c;i++)
    {
        sum+=arr[i];
    }
    return sum/(arrSize-2*c);
}
int main()
{
    int a[20]={3,4,11,0,999,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    printf("%lf\n",trimMean(a,20));
    system("pause");
    return 0;
}