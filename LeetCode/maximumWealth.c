#include<stdio.h>
#include<stdlib.h>
int maximumWealth(int   (*accounts)[3], int accountsSize, int* accountsColSize) {//1672
    int max=0,sum=0;
    for(int i=0;i<accountsSize;i++)
    {
        sum=0;
        for(int j=0;j<(*accountsColSize);j++)
        {
            sum+=accounts[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    return max;
}
int main()
{
    int l=3;
    int a[3][3]={{1,2,3},{3,4,5},{5,6,7}};
    printf("%d\n",maximumWealth(a,3,&l));
    system("pause");
    return 0;
}