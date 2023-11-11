#include<stdio.h>
#include<stdlib.h>
int countNegatives(int (*grid)[4], int gridSize, int* gridColSize) {//1351
    int sum=0,i,j;
    for(i=0;i<gridSize;i++)
    {
        for(j=0;j<(*gridColSize);j++)
        {
            if(grid[i][j]<0)
            {
                sum+=(*gridColSize-j);
                break;
            }
        }
    }
    return sum;
    
}
int main()
{
    int l=4;
    int a[4][4]={{1,2,3,-9},{-1,-2,-3,-4},{1,2,3,4},{3,2,-1,-10}};
    printf("%d\n",countNegatives(a,4,&l));
    system("pause");
    return 0;

}