#include <stdio.h>
#include <stdlib.h>
double Add(double a, double b) // 加函数
{
    double sum;
    sum = a + b;
    return sum;
}
double Minus(double a, double b) // 减函数
{
    double value;
    value = a - b;
    return value;
}
double Divide(double a, double b) // 除函数
{
    double quo;
    quo = a / b;
    return quo;
}
double Multipy(double a, double b) // 乘函数
{
    double M_Value;
    M_Value = a * b;
    return M_Value;
}
int main()
{
    while (1)
    {
        system("cls");
        double value1, value2, a, b, c, d;
        int case_value;
        printf("1********加法\n2********减法\n3********除法\n4********乘法\n按5键退出计算器\n");
        printf("请输入你要进行计算的两个数\n");
        scanf("%lf %lf", &value1, &value2);
        printf("请输入你要进行运算或者操作\n");
        scanf("%d", &case_value);
        switch (case_value)
        {
        case 1:
            a = Add(value1, value2);
            printf("和为：%lf\n", a);
            system("pause");
            break;
        case 2:
            b = Minus(value1, value2);
            printf("差为：%lf\n", b);
            system("pause");
            break;
        case 3:
            c = Divide(value1, value2);
            printf("商为：%lf\n", c);
            system("pause");
            break;
        case 4:
            d = Multipy(value1, value2);
            printf("积为：%lf\n", d);
            system("pause");
            break;
        default:
            exit(0);
            break;
        }
    }
    system("pause");
    return 0;
}