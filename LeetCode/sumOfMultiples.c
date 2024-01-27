#include<stdio.h>
#include<stdlib.h>
int sumOfMultiples(int n){//2625
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0)
        {
            sum+=i;
        }
        else if(i%5==0)
        {
            sum+=i;
        }
        else if(i%7==0)
        {
            sum+=i;
        }
    }
    return sum;

}
int main()
{
    printf("%d\n",sumOfMultiples(35));
    system("pause");
    return 0;
}