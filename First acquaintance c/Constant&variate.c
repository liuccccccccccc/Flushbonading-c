#include<stdio.h>
#include<stdlib.h>
#define max 1000
int int1=1;//全局变量  作用域是整个工程
enum sex//定义了枚举类型的常量，sex的取值只能为枚举值
{
 male,
 female   
};
void Printfglobalvalue()
{
    printf("变量int1的值为%d\n",int1);
}
int main()
{
    const char ch='B';
    int1=2;//局部变量，作用域是所在的局部
    scanf("%d",&int1);
    printf("局部变量int1的值为：%d\n 字节大小为：%d的\n",int1,sizeof(int1));
    Printfglobalvalue();//输出结果为局部变量的值，因为函数在调用后会在主函数中执行代码块，所以会输出主函数中局部变量的值。
    printf("字面常量：%d\ndefine定义的常量: %d\nconst定义的常变量：%c\n",100,max,ch);//打印常量
    system("pause");
    return 0;
}

