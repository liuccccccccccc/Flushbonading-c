#include<stdio.h>
#include<stdlib.h>//本题主要是通过动态内存分配和二级指针来构建了一个不规则的二维数组，就是每行长度不一样的二维数组。最终求得指定行数的杨辉三角
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    *returnSize=numRows;
    *returnColumnSizes=(int *)malloc(4*numRows);
    int **returnA=(int **)malloc(sizeof(int *)*numRows);//在不同位数的机器下，其地址大小不一样，为考虑全部情况，根据指针大小设置内存大小。有的是4字节有的是8字节。
    for(int i=0;i<numRows;i++)
    {
        (*returnColumnSizes)[i]=i+1;
        returnA[i]=malloc(4*(i+1));
        (*(returnA+i))[0]=1;
        (*(returnA+i))[i]=1;
        for(int j=1;j<i;j++)
        {
            returnA[i][j]=returnA[i-1][j-1]+returnA[i-1][j];
        }

    }
    return returnA;
}
int main()
{
    int l;
    int *a;
    int ** v=generate(5,&l,&a);
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<a[i];j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}