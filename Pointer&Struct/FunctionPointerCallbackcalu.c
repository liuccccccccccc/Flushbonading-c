#include <stdio.h>
#include <stdlib.h>
float Add(float, float); // 函数声明时可以不带变量名字，直接写对应的类型
float Sub(float, float);
float Mul(float, float);
float Div(float, float);
void Menu()
{
    printf("1****加\n");
    printf("2****减\n");
    printf("3****乘\n");
    printf("4****除\n");
    printf("0****退\n");
}
float CallBack(float (*p)(float, float))
{
    float a, b;
    printf("请输入两个数\n");
    scanf("%f %f", &a, &b);
    return p(a, b);//通过函数指针调用函数。函数和函数间的实参传入到形参，然后通过函数指针(形参）,这样的就是回调函数，指的是被调用的函数。
}//因为p=&函数名=函数名，所以可以直接通过指针调用。不用解引用
int main()
{
    int input;
    do
    {
        Menu();
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("和为%f\n", CallBack(&Add));//函数的名字和取地址是等价的，
            break;
        case 2:
            printf("差为%f\n", CallBack(&Sub));
            break;
        case 3:
            printf("积为%f\n", CallBack(Mul));
            break;
        case 4:
            printf("商为%f\n", CallBack(Div));
            break;
        case 0:break;
        default:
            printf("输错了重来\n");
            break;
        }
    } while (input);
    system("pause");
    return 0;
}
float Add(float a, float b)
{
    return a + b;
}
float Sub(float a, float b)
{
    return a - b;
}
float Mul(float a, float b)
{
    return a * b;
}
float Div(float a, float b)
{
    return a / b;
}