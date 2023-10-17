#include<stdio.h>
#include<stdlib.h>//1051
int heightChecker(int* heights, int heightsSize){
    int tem;
    int a[heightsSize];
    for(int i=0;i<heightsSize;i++)
    {
        a[i]=heights[i];
    }
    for(int i=0;i<heightsSize-1;i++)
    {
        for(int j=0;j<heightsSize-i-1;j++)
        {
            if(heights[j+1]<heights[j])
            {
                tem=heights[j+1];
                heights[j+1]=heights[j];
                heights[j]=tem;
            }

        }
    }
    tem=0;
    for(int i=0;i<heightsSize;i++)
    {
        if(heights[i]!=a[i])
        {
            tem++;
        }
    }
    return tem;

}
int main()
{
    int a[5]={5,2,3,6,1};
    printf("%d\n",heightChecker(a,5));
    system("pause");
    return 0;
}