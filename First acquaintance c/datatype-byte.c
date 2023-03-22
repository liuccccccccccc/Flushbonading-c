#include<stdio.h>
#include<stdlib.h>
int main()

{
    int int1=1;char char1='A';
    double double1=1.0;
    float  float1=2.0;
    short int sint=2;
    long int lint=3;
    printf("int字节大小为：%d\nchar字节大小为:%d\ndouble字节大小为：%d\nfloat字节大小为：%d\nshort int字节大小为：%d\nlong int字节大小为%d\n",
    sizeof(int1),sizeof(char1),sizeof(double1),sizeof(float1),sizeof(sint),sizeof(lint));
    system("pause");
    return 0;
}