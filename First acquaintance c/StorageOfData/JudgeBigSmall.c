#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int a[2]={1,20};
    // char *d=&a[0];//利用char 类的指针，能够访问整形变量的第一个字节，从而去判断第一个字节是高位还是低位，然后判断 除是大端还是小端
    // if(&a[0]<&a[1])
    // {
    //      if(*d==1) 
    //      printf("小端存储");
    //      else
    //      printf("大端存储");
    // }
    char z=-1;
    char r=1;
    printf("%c\n%c\n",z,r);
    // short a=-1;
    // long b=-1;
    // int c=-1;
    // printf("%u\n%u\n%d\n%u\n",c,b,a,a);//%u打印的默认的是4个字节大小的整形无符号数，所以在打印字节不是4个字节的类型时，可能会发生截断或者是提升。然后才打印出对应的类型%u打印无符号数，%d打印整形数。
    system("pause");
    return 0;

}