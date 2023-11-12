#include<stdio.h>
#include<stdlib.h>
int * kidsWithCandies(int* candies, int candiesSize, int extraCandies) {//1431
    int *a=malloc(4*candiesSize);
    int max=candies[0];
    for(int i=0;i<candiesSize;i++)
    {
       if(candies[i]>max)
       {
           max=candies[i];
       }
    }
    for(int i=0;i<candiesSize;i++)
    {
        if((candies[i]+extraCandies)>=max)
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
    }
    return a; 
}
int main()
{
    int a[3]={12,1,12};
    int *b=kidsWithCandies(a,3,10);
    for(int i=0;i<3;i++)
    {
        printf("%d ",b[i]);
    }
    system("pause");
    return 0;
}