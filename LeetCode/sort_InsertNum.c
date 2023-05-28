#include<stdio.h>
#include<stdlib.h>
void sort_Number(long *a,int len,long num)
{
    *(a+(len-1))=num;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                long temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }

}
int main()
{
    int n;
    long num;
    scanf("%d",&n);
    long a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    scanf("%ld",&num);
    sort_Number(a,n+1,num);
    for(int i=0;i<n+1;i++)
    {
        printf("%ld ",a[i]);
    }
    printf("\n");
    system("pause");
    return 0;

}