#include <stdio.h>
#include <stdlib.h>
enum color // 定自定义枚举类型，成员都是常量，值为int型，每个成员的值都是从上一个值递增1，默认是从0开始.
{          // 成员都表示一个值为整形的常量
    blue,
    green,
    red,
    gray
};
enum a
{
    b=5,//b为5
    c,//c为6
    d=0,//d为0
    e,//e为1
    f//f为2
};

int main()
{
    printf("%d %d %d\n",c,e,f);
    enum color a = blue; // 创建枚举变量，值只能是对应的枚举类型中的成员。
    printf("%d \n", a);
    int input;
    while (1)
    {
        scanf("%d", &input);
        switch (input)
        {

        case blue:
            a = blue;
            printf("%d\n", a);
            break;
        case green:
            a = green;
            printf("%d\n", a);
            break;
        case red:
            a = red;
            printf("%d\n", a);
            break;
        case gray:
            a = gray;
            printf("%d\n", a);
            break;
        default:
        system("pause");
            return 0;
        }
    }
    printf("%d \n", a);
    system("pause");
    return 0;
}