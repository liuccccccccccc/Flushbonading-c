#include<stdio.h>
#include<stdlib.h>
void Form_9x9()
{
    for(int i=1;i<=9;i++)
    {
        for(int b=1;b<=i;b++)
    {
        printf("%d*%d=%-2d ",i,b,i*b);
    }
    printf("\n");
    }
}
int main()
{
    Form_9x9();
    system("pause");
    return 0;
}