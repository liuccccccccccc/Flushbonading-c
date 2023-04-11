#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
char *MyStrcpy(char *a, const char *b) // 实现strcpy函数的copy功能，把字符串b拷贝给b把'\0'也拷贝进去，相当于直接让字符串a的值等于字符串b.
{                // 使用const关键字修饰指针变量，此时修饰的是*b使得指针b的值可以改变，但是不能通过*b改变指向的值。*b只可以读不能写
    assert(a!=NULL);
    assert(b!=NULL);//使用宏 assert进行检测，输入的指针是否为空，如果表达式值为真，则什么也不发生，如果表达式值为假，则跳出警告。

    char *ret = a;
    while (*b != '\0')
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';
    return ret; // strcpy库函数的返回值为拷贝后的字符串。
    // while(*pa++=*pb++);//可以把上面的代码优化成这样，不断的赋值，然后根据赋的字符的ASCII码值，判断真假，当为'\0'时，此时的ASCII值为0，然后while循环结束，同时也赋值结束。
}
int main()
{

    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);
    printf("copy前：\n%s\n%s\n", a, b);
    //strcpy(a, b);
    // int d = 33;
    // char f = '0';
    // f = d;
   
    printf("链式访问：%s",MyStrcpy(a,NULL)); 
    printf("copy后：\n%s\n%s\n", a, b);
    system("pause");
    return 0;
}