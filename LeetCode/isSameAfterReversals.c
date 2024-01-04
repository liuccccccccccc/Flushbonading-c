#include<stdio.h>
#include<stdlib.h>
int isSameAfterReversals(int num) {//2119
    if(num==0)
    {
        return 1;
    }
    if(num%10==0)
    {
        return 0;
    }
    return 1;
    
    
}
int main()
{
    printf("%d\n",isSameAfterReversals(18001));
    system("pause");
    return 0;
}