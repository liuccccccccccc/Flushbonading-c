#include<stdio.h>
#include<stdlib.h>
int* sumZero(int n, int* returnSize){//1304
    int *c=malloc(4*n);
    int a=n/2,b=-a;
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        c[i]=a--;
        c[j]=b++;
    }
    if(n%2!=0)
    {
        c[n/2]=0;
    }
    *returnSize=n;
    return c;
}
int main()
{
    int l;
    int *a=sumZero(5,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}