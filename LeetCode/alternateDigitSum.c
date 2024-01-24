#include<stdint-gcc.h>
#include<stdlib.h>
#include<stdio.h>

int alternateDigitSum(int n) {//2544
    int c=1,temp=n,sum=0;
    while(temp>9)
    {
        c++;
        temp/=10;
    }
    for(int i=c;i>=1;i--)
    {
        if(i%2==0)
        {
            sum+=-(n%10);
            n/=10;
        }
        else
        {
            sum+=n%10;
            n/=10;
        }
    }
    return sum;

    
}
int main()
{
    printf("%d\n",alternateDigitSum(12134));
    system("pause");
    return 0;
}