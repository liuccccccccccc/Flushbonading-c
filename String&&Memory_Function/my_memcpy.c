#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void *myMemcpy(void *des,const void *from,unsigned int n)//void定义指针时，表示无具体类型指针，可以接收指针，但是不能使用，因为不知道指针是什么类型，不能够解引用
{
    assert(des||from);
    char *a=(char *)des;//强制转换成char*类型，因为char*一次只访问一个字节，加1也只加一个字节，可以将目标变量的每个字节(每个内存空间)都拷贝进去
    const char *b=(const char *)from;
    for(int i=0;i<n;i++)
    {
        *(a+i)=*(b+i);
    }
    return  des;
}

int main()
{
    int a[10]={0};
    int b[5]={1,2,3,4,5};
    int d=0,e=111;
    int *c=(int *)myMemcpy(&d,&e,4);
    int *f=(int *)myMemcpy(a,b,20);
    for(int i=0;i<5;i++)
    {
        printf("%d ",f[i]);
    }
    printf("%d %d",*c,d);
    system("pause");
    return 0;
}