#include<stdio.h>
#include<stdlib.h>//1952
int isThree(int n) {
    int c1=0l,c2=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c1++;
        }
        if(i*i==n)
        {
            c2++;
        }
    }
    if(c1==1&&c2==1)
    {
        return 1;
    }
    return 0;
    
}
int main()
{
    printf("%d\n",isThree(25));
    system("pause");
    return 0;
}