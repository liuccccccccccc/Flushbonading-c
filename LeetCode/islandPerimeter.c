#include<stdio.h>
#include<stdlib.h>
int islandPerimeter(int  (* grid)[4], int gridSize, int* gridColSize){
    int a[gridSize+2][(*gridColSize)+2];
    for(int i=0;i<gridSize+2;i++)
    {
        for(int j=0;j<(*gridColSize)+2;j++)
        {
            if(1<=i&&i<=gridSize&1<=j&&j<=(*gridColSize))
            {
                a[i][j]=grid[i-1][j-1];
            }
            else
            {
                a[i][j]=0;
            }
        }
    }
    int count=0,sum=0;
    for(int i=1;i<=gridSize;i++)
    {
        for(int j=1;j<=(*gridColSize);j++)
        {
           if(a[i][j]==1)
           {
               sum++;
               if(a[i-1][j]==1)
               {
                   count++;
               }
               if(a[i+1][j]==1)
               {
                   count++;
               }
               if(a[i][j+1]==1)
               {
                   count++;
               }
               if(a[i][j-1]==1)
               {
                   count++;
               }
           }
        }
    }
    return 4*sum-count;

}
int main()
{
   int a[4][4]={{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};   
   int b=4;
   printf("%d\n",islandPerimeter(a,4,&b));
     system("pause");
    return 0;
}