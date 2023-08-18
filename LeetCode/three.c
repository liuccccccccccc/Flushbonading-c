#include<stdio.h>
#include<stdlib.h>
int isPowerOfThree(int n){
    if(n==0)
    {
        return 0;
    }
    while(1)
    {
        if(n==1)
        {
            return 1;
        }
        if(n%3==0)
        {
            n/=3;
        }
        else
        {
            return 0;
        }
    }
    


}
int main()
{
    printf("%d\n",isPowerOfThree(27));
    system("pause");
    return 0;
}