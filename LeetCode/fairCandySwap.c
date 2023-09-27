#include<stdio.h>
#include<stdlib.h>
//888糖果交换
int* fairCandySwap(int* a, int as, int* b, int bs, int* returnSize){
    int *r=malloc(8);
    *returnSize=2;
    int sa=0,sb=0;
    for(int i=0;i<as;i++)
    {
        sa+=a[i];
    }
    for(int i=0;i<bs;i++)
    {
        sb+=b[i];
    }
    for(int i=0;i<bs;i++)
    {
        for(int j=0;j<as;j++)
        {
            if(sb-b[i]+a[j]==(sa+sb)/2)
            {
                r[0]=a[j];
                r[1]=b[i];
                break;
            }
        }
    }
    return r;

}
int main()
{
    int a[2]={1,1},b[2]={2,2},l;
    int *d=fairCandySwap(a,2,b,2,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",d[i]);

    }
    system("pause");
    return 0;
}