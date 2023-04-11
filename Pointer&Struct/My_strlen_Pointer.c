#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int My_strlen(const char * a)//const修饰*a使得指针不能通过*a改变指向的值。只能通过*a读不能通过*a写。
{
    assert(a!=NULL);//断言判断，如果表达式为假，跳出错误，如果为真，什么也不发生
    int count=0;
    while(*(a++))//因为const修饰的是*a,所以指针变量a的值是可以改变的，先用*a访问对应的字符，然后再加1，指针变为下一个字符的地址。以此类推，直到*a为\0，此时ASCII码为0，表达式值为假循环结束。
    {
        count++;
    }
    return count;
}
int main()
{
    char a[100];
    scanf("%s",a);
    printf("%d ",My_strlen(a));//链式访问
    system("pause");
    return 0;

}