#include<stdio.h>
#include<stdlib.h>
int hammingWeight(unsigned int n) {//编写一个函数，输入是一个无符号整数（以二进制串的形式），返回其二进制表达式中数字位数为 '1' 的个数（也被称为汉明重量）。
    int count=0;
    for(int i=0;i<32;i++)
    {
        if(n&1==1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main()
{
    int d=hammingWeight(10);
    printf("%d\n",d);
    system("pause");
    return 0;
}