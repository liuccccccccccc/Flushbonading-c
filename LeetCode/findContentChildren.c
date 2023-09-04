#include<stdio.h>
#include<stdlib.h>//分发饼干
int cmp(const void * a,const void *b)
{
    return *(int *)a-*(int *)b;
}


int findContentChildren(int* g, int gSize, int* s, int sSize){
    qsort(g,gSize,4,cmp);
    qsort(s,sSize,4,cmp);
    int count=0,temp=0;
    for(int i=0;i<gSize;i++)
    {

        for(int j=i;j<sSize;j++)
        {
            if(s[j]>=g[i])
            {
                count++;
                temp=j+1;
                break;
            }
        }
    }
    return count;

}
int main()
{
    int a[4]={7,8,9,10};
    int b[4]={8,7,6,5};
    int c=findContentChildren(a,4,b,4);
    printf("%d\n",c);
    system("pause");
    return 0;
}