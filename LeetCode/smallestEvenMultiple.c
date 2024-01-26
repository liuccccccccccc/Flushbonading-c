#include<stdio.h>
#include<stdlib.h>
int smallestEvenMultiple(int n) {//2413
    int t=n;
    while(1)
    {
        if(t%2==0&&t%n==0)
        {
            return t;
        }
        t++;
    }
    
}
int main()
{
    printf("%d\n",smallestEvenMultiple(100));
    system("pause");
    return 0;
}