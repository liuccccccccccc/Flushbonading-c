#include<stdio.h>
#include<stdlib.h>//575分糖果
int cmp(const void *a,const void *b )
{
    return * (int *)a-* (int *)b;  
}
int distributeCandies(int* candyType, int candyTypeSize){
    int count=1;
    qsort(candyType,candyTypeSize,4, cmp);
    for(int i=0;i<candyTypeSize-1;i++)
    {

        if(candyType[i]!=candyType[i+1])
        {
            count++;
        }
        if(count>=candyTypeSize/2)
        {
           return candyTypeSize/2;
        }
        
    }
    return count;

}
int main()
{
    int a[6]={1,1,2,2,3,3};
    printf("%d",distributeCandies(a,6));
    system("pause");
    return 0;
}
