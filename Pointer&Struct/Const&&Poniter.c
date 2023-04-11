#include<stdio.h>
#include<stdlib.h>
int main()
{
    const int a=10;
    //a=20;//const修饰的变量值为常变量，不能改变
    int *pa=&a;
    *pa=20;//但是可以通过指针间接改变值
    printf("%d\n",a);//此时输出值为20.
    int b=30;

    const int *pb=&a;//此时修饰的是*pb，const修饰，使得指针不能够通过*pb去改变指向的值。
    //*pb=20;此时代码报错。、
    pb=&b;//但是指针变量pb的值是可以改变的。
    printf("%d \n",*pb);//const修饰后，*pb只有读的权限，不能够写。


     int *const pc=&b;//const直接修饰pc，使得指针变量pc变为了常变量，pc的值不能改变。但是*pc不受限制，可以通过*pc去写数据。
     //pc=&a;//报错因为，pc为常量，值不能改变。
    *pc=40;
    printf("%d \n",b);
    system("pause");
    return 0;



    
}