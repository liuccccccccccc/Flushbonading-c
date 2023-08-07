#include<stdio.h>
#include<stdlib.h>
unsigned int reverseBits(unsigned int n) {//颠倒给定的 32 位无符号整数的二进制位。
    unsigned int count=0;
    for(int i=1;i<=32;i++)
    {
        count+=(n&1);
        if(i<32)
        {
             count=count<<1;
        }
        n=n>>1;
    }
    return count;
    
}
int main()
{
    unsigned int n=reverseBits(1);
    printf("%u\n",n);
    system("pause");
    return 0;
}