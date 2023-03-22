#include<stdio.h>
#include<stdlib.h>
int main()
{
    extern int int1;//引入同一工程下的全局变量，验证全局变量的性质。
    printf("全局变量int1的值加1后为：%d\n",int1);//正常是可以运行出来，并且打印出int1的值。
    system("pause");
    return 0;
}