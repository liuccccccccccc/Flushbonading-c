#include<stdio.h>
#include<stdlib.h>
void stack_flow()
{
    stack_flow();//每次调用都会都会给函数在栈上分配一个内存空间，如果没有出口，就会无限制的递归，然后造成栈溢出。
}

void apart_Number(int number)
{
    if(number>9)
    {
      apart_Number(number/10);
    }
    printf("%d ",number%10);
}
int main()
{
    //stack_flow();
    int number;
    scanf("%d",&number);
    apart_Number(number);
    system("pause");
    return 0;

}
