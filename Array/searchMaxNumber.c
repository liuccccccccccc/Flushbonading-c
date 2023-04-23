#include<stdio.h>
#include<stdlib.h>
int SmN(int *a,int *b,int n)
{
    int max=a[0];
    int flag=0;
    int count=2;
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            flag=i;
        }
    }
    b[0]=max;
    b[1]=flag;
    for(int i=0;i<n;i++)
    {
        if(max==a[i]&&i!=flag)
        {
            b[count++]=i;
        }

    }
    return count;


}
int main()
{
    int a[100];
    int i=0;
    int b[10];
    while(1)
    {
        scanf("%d",&a[i]);
        if(a[i++]==0)
        {
            break;
        }
    }
    int n=SmN(a,b,i-1);
    for(int j=0;j<n;j++)
    {
        if(j==0)
        {
            printf("max:%d\n",b[j]);
        }
        else
        {
            printf("位置：%d\n",b[j]+1);
        }
        
    }
    system("pause");
    return 0;
}