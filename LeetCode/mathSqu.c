#include <stdio.h>
#include <stdlib.h>
int mathSqu(int n)
{

    // for (long i = n; i >= 1; n--)
    // {
    //     for (long j = 1; j <= n / 2; j++)
    //     {
    //         if (j * j == n)
    //         {
    //             return j;
    //         }
    //     }
    // }
    // return 1;
    for(long i=1;i<=(n/2+1);i++)
    {
        if(n<i*i)
        {
            return i-1;
        }
        else if(n==i*i)
        {
            return i;
        }
    }
    if(n==1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    while(1)
    {
    scanf("%d",&n);
    printf("%d\n",mathSqu(n));
    }
    
    system("pause");
    return 0;
}