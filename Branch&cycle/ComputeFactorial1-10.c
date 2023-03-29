#include<stdio.h>
#include<stdlib.h>
int Compute1_10()
{
    int temp = 0,n=0,value=0;
    for(int i = 1;i <= 10;i++)
    {
        for(temp = i,n = i - 1;n >= 1;n--)
        {
              temp *= n;
        }
        value += temp;
    }
    return value;
}

int main()
{
    int F_Vlaue=Compute1_10();
    printf("1！~10！相加=%d\n",F_Vlaue);
    system("pause");
    return 0;
}