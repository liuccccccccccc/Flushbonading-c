#include<stdio.h>
#include<stdlib.h>

#define SQU(X)  X*X
#define SQU2(Y) (Y)*(Y)
#define PRINT(A)  printf("the "#A" value is %d\n",A);//在宏中可以通过#加上标识符将标识符转换为字符串。例如当X替换为变量a时，#a意为”a“。
#define CON(C,D) C##D//可以将两个标识符连接起为一个标识符，
int main()
{
    int a=9,b=1,c=2;
    //printf("%d\n",SQU(8+1));//因为宏是完成替换的，所以这个替换后的表达式为1+8*1+8.得不到预想的结果。要给宏加上适当括号。
    printf("%d\n",SQU2(8+1));//因为宏是完成替换的，所以这个替换后的表达式为(1+8)*(1+8).得不到预想的结果。要给宏加上适当括号。
    PRINT(a);
    PRINT(b);
    PRINT(c);
    int cd=100;
    printf("%d",CON(c,d));
    system("pause");
    return 1;
}