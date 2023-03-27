#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a=9;char b='A';
    int *pa=&a;char *pb=&b;
    printf("a=%d\nb=%c\n",a,b);
    *pa=1,*pb='B';
    printf("*pa=%d\n*pb=%c\na=%d\nb=%c\n",*pa,*pb,a,b);
    printf("pa内存空间为%d\npb内存空间为%d\n",sizeof(pa),sizeof(pb));
    system("pause");
    return 0;


}