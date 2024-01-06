#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)//2160
{
    return *(int *)a-*(int *)b;
}
int minimumSum(int num) {
    int a[4],i=0;
    while(num>9)
    {
        a[i++]=num%10;
        num/=10;
    }
    a[i]=num;
    qsort(a,4,4,cmp);
    return a[0]*10+a[3]+a[1]*10+a[2];
}
int main()
{
    int a=2932;
    printf("%d\n",minimumSum(a));
    system("pause");
    return 0;
}