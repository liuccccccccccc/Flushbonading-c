#include<stdio.h>
#include<stdlib.h>
int findChampion(int  (*grid)[3], int gridSize, int* gridColSize) {//2923
    int no_1;
    int n[100]={0};
    for(int i=0;i<gridSize;i++)
    {
        for(int j=0;j<gridSize;j++)
         {
             if(grid[i][j]==1)
             {
                 n[i]++;
             }

         }
    }
    int max=n[0];
    no_1=0;
    for(int i=0;i<gridSize;i++)
    {
        if(max<n[i])
        {
            max=n[i];
            no_1=i;
        }
    }
    return no_1;
    
}
int main()
{
    int a[3][3]={{0,0,0},{1,0,0},{1,1,0}};
    int l=3;
    printf("%d\n",findChampion(a,3,&l));


    system("pause");
    return 0;
}