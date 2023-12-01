#include<stdio.h>
#include<stdlib.h>
int diagonalSum(int (*mat)[4], int matSize){//1572
    int sum=0;
    for(int i=0;i<matSize;i++)
    {
        sum+=mat[i][i];
    }
    for(int i=0,j=matSize-1;i<=matSize-1;i++,j--)
    {
        sum+=mat[i][j];
    }
    if(matSize%2!=0)
    {
        sum-=mat[matSize/2][matSize/2];
    }
    return sum;

}
int main()
{
    int a[4][4]={{1,2,2,3},{1,2,3,4},{1,2,4,3},{1,2,3,4}};
    printf("%d\n",diagonalSum(a,4));
    system("pause");
    return 0;
}