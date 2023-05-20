#include<stdio.h>
#include<stdlib.h>//大小的具体球求法见笔记,
//#pragma pack(1);//可以修改默认比较对齐数，结构体中的每个变量都有一个对齐数，用于在内存中存储，对齐数等于每个成员的大小和默认比较对齐数中的最小值。对齐后的大小是成员中最大对齐数的倍数
struct A{
    int i;
    char a;
    int j;
};
struct B
{
    int i;
    struct A a;//嵌套结构体成员的对齐数是该嵌套结构体成员的最大对齐数。
    double c;
};


struct  C//自定义位段，：后指的是变量的大小，单位是bit。
{
    int a:2;
    int b:20;
    int c:3;
    int d:32;
};


int main()
{
    printf("%d %d %d",sizeof(struct A),sizeof(struct B),sizeof(struct C));
    system("pause");
    return 0;
}
