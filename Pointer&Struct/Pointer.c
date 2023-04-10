#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *pa=NULL;
    char *pb=NULL;
    int c=0x11223344;//0x表示后面的数是16进制，1个16进制需要4个二进制位来表示，所以a中的每两个数代表一个字节。
    pa=&c;
    pb=&c;
    *(pb)=0;
    printf("%x\n",c);//输出16进制的结果，会发现只有第一个字节的值被改为0，因为char类型的指针只会针对char类型的数据，改变容量空间为1个字节的变量。
    *(pa)=0;
    printf("%x\n",c);//int类型的指针，对应int类型的变量，可以改变变量的值，所以对应的变量地址要用对应类型的指针来存储，才能正常访问和使用。
    system("pause");
    return 0;
}