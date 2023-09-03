#include<stdio.h>
#include<stdlib.h>
int checkPerfectNumber(int num){//507 完美数
    long sum=1;
    if(num==1)
    {
        return 0;
    }
    for(long i=2;i<=num/3;i++)
    {
        if(num%i==0)
        {
            if(i>num/i)
            {
                break;
            }
            sum+=(num/i+i);
        }
    }
    if(num==sum)
    {
        return 1;
    }
    return 0;

}
int main()
{
    int a=28;
    printf("%d\n",checkPerfectNumber(a));
    system("pause");
    return 0;
}