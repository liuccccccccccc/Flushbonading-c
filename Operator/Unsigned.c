#include<stdio.h>
#include<stdlib.h>
int get1Number(int a)
{

}

int main()
{
    signed int a;
    a=-1;//a位无符号数，此时-1存放在内存中的补码，32位1会被全看出成无符号数据位，相当于是正数的源码，直接输出一个很大数。
    printf("%u\n",a);//%u输出无符号数，
    system("pause");
    return 0;
}