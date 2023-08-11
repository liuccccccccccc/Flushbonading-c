#include<stdio.h>
#include<stdlib.h>
int isPowerOfFour(int n){
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
        if(n%4==0)
        {
            n/=4;
        }
        else
        {
            return 0;
        }
    }
    


}
int main()
{
    printf("%d\n",isPowerOfFour(64));
    system("pause");
    return 0;    
}