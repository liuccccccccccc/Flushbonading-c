#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
int searchIndex(const int *des,int length,int src)
{
    assert(des);
    for(int i=0;i<length;i++)
    {
        if(*(des+i)==src)
        {
            return i;
        }
    }
    for(int j=length-1;j>=0;j--)
    {
        if(*(des+j)<src)
        {
            return j+1;
        }
    }

}
int main()
{
    int a[]={1,2,3,4,5},src;
    while(1)
    {
    scanf("%d",&src);
    int value=searchIndex(a,5,src);
    printf("位置为%d\n",value);
    }
    system("pause");
    return 0;;
}