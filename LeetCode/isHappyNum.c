#include<stdio.h>
#include<stdlib.h>
int isHappy(int n){
    int sum,i,j=0;
    while(n!=1)
    {
        j++;
        if(j>7)
        {
            return 0;
        }
        sum=0;
        while(n>9)
        {
            i=n%10;
            n=n/10;
            sum+=i*i;
            
        }
        sum+=n*n;
        n=sum;
    }
    return 1;

}
int main()
{
    int a=isHappy(10);
    printf("%d ",a);
    system("pause");
    return 0;
}