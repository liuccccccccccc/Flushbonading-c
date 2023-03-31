#include<stdio.h>
#include<stdlib.h>
void swap_value(int a, int b)//按值传参，参数是局部变量，相当于只是拿了主函数实参的数值，不改变主函数变量的值。
{
    int temp =0;
    temp = a;
    a = b;
    b = temp;
}
void swap_Address(int *a,int *b )//按地址传参，参数是地址，拿了主函数变量的地址，可以影响主函数变量的值
{

    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;

}
int main()
{
    int a=10,b=20;
    swap_value(a,b);
    printf("%d %d\n",a,b);
    swap_Address(&a,&b);
    printf("%d %d\n",a,b);
    system("pause");
    return 0;
}