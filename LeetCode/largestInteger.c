#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cmp(const  void*a,const void  *b)//2231
{
    return *(int *)a-*(int *)b;
}
int largestInteger(int num) {
    int count=0,temp=num;
    while(num>9)
    {
        num/=10;
        count++;
    }
    count++;
    int n[count];
    int a[count],b[count],aa=0,bb=0;
    for(int i=0;i<count;i++)
    {
        n[i]=temp%10;
        temp/=10;
    }
    for(int i=0;i<count;i++)
    {
        if(n[i]%2==0)
        {
            a[aa++]=n[i];
        }
        else
        {
            b[bb++]=n[i];
        }
    }
    qsort(a,aa,4,cmp);
    qsort(b,bb,4,cmp);
    aa=0,bb=0,temp=0;
    for(int i=0;i<count;i++)
    {
        if(n[i]%2==0)
        {
            temp+=a[aa++]*pow(10,i);
        }
        else
        {
            temp+=b[bb++]*pow(10,i);
        }
    }
    return temp;
}
int main()
{
    printf("%d",largestInteger(1234));
    system("pause");
    return 0;

}