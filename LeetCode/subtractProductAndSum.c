#include<stdio.h>
#include<stdlib.h>
int subtractProductAndSum(int n){
    int c=1,s=0;
    while(n>9)
    {
        c*=(n%10);
        s+=(n%10);
        n/=10;
    }
    c*=n;
    s+=n;
    return c-s;

}
int main()
{
    printf("%d\n",subtractProductAndSum(111));
    system("pause");
    return 0;
}