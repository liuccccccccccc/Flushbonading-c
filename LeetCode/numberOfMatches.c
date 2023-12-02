#include<stdio.h>
#include<stdlib.h>//1688
int num(int n)
{
    int time=0;
    while(n>1)
    {
        if(n%2==0)
        {
            time+=(n/2);
            n/=2;
        }
        else
        {
            time+=(n/2);
            n=n/2+1;
        }
    }
    return time;
}
int main()
{
    printf("%d\n",num(10));
    system("pause");
    return 0;
}