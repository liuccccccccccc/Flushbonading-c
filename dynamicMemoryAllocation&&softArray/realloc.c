#include <stdio.h>
#include <stdalign.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    int l=n;
    int *p1 = (int *)malloc(n*4); // 动态开辟个字节的内存空间。如果堆上有空间返回首字节的地址为void *类型，如果空间不够大，则返回NULL。
    if (p1 == NULL)
    {
        printf("动态内存开辟失败");
        system("pause");
        return 0; // 内存开辟失败，直接终止函数。
    }
    for (int i = 0; i < n; i++)
    {
        *(p1 + i) = i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p1 + i));
    }
    printf("\n");
    scanf("%d",&n);
    int *p2=realloc(p1,n*4);//realloc函数的作用是扩展分配的空间.不改变原有的数据.p1表示原来的内存空间,参数2表示将原有的内存空间扩展到多大.如果分配失败返回NULL.
    if(p2==NULL)
    {
        printf("分配失败\n");
        return 0;
    }
    for(int i=l;i<n;i++)
    {
        *(p2+i)=i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p2 + i));
    }
    short *p3=realloc(NULL,4*2);//将前半部分参数设为NULL,可以达到malloc动态分配内存的效果.
    for(int i=0;i<4;i++)
    {
        *(p3+i)=i;printf("%d ",*(p3+i));
    }
    free(p2);
    system("pause");
    return 0;
}