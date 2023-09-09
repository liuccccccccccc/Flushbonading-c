#include<stdio.h>
#include<stdlib.h>
int maxCount(int m, int n, int  ( *ops)[2], int opsSize){//598范围求和
    if(opsSize==0)
    {
        return m*n;
    }
    int mx=ops[0][0],my=ops[0][1];
    for(int i=0;i<opsSize;i++)
    {
        if(mx>ops[i][0])
        {
            mx=ops[i][0];
        }
        if(my>ops[i][1])
        {
            my=ops[i][1];
        }
    }

    return  mx*my;

}
int main()
{
    int a[2][2]={{2,2},{3,3}};
    printf("%d\n",maxCount(3,3,a,2));
    system("pause");
    return 0;
}