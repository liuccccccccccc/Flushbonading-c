#include<stdio.h>
#include<stdlib.h>//1317
 int judgezero(int n)
 {
     while(n>9)
     {
         if((n%10)==0)
         {
             return 0;
         }
         n=n/10;
     }
     return 1;
 }
int* getNoZeroIntegers(int n, int* returnSize){
    int a=1,*c=malloc(8);
    *returnSize=2;
    while(1)
    {
        if(judgezero(n-a)!=0&&judgezero(a)!=0)
        {
            c[0]=a;
            c[1]=n-a;
            return c;
        }
        a++;
    }
    return c ;
}
int main()
{
    int l;
    int *c=getNoZeroIntegers(101,&l);
    for(int i=0;i<2;i++)
    {
        printf("%d ",c[i]);
    }
    system("pause");
    return 0;
}