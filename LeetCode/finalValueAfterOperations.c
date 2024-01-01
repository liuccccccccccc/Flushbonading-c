#include<stdio.h>
#include<stdlib.h>
int finalValueAfterOperations(char (*operations)[5], int operationsSize) {//2011
    int x=0;
    for(int i=0;i<operationsSize;i++)
    {
        if(operations[i][1]=='-')
        {
            x--;
        }
        else
        {
            x++;
        }
    }
    return x;
    
}
int main()
{
    char a[4][5]={"x++","x--","x--","x--"};
    printf("%d\n",finalValueAfterOperations(a,4));
    system("pause");
    return 0;
}