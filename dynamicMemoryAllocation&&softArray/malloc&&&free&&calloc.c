#include <stdio.h>
#include <stdalign.h>
#include <stdlib.h>
int main()
{

    int n;
    scanf("%d",&n);
    int *p1 = (int *)malloc(n*4); // 动态开辟个字节的内存空间。如果堆上有空间返回首字节的地址为void *类型，如果空间不够大，则返回NULL。
    if (p1 == NULL)
    {
        printf("动态内存开辟失败");
        return 0; // 内存开辟失败，直接终止函数。
    }
    // for (int i = 0; i < n; i++)
    // {
    //     *(p1 + i) = i;
    // }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p1 + i));
    }
    int *p2 = (int *)calloc(n, 4); // 和malloc功能一样，只不过有两个参数，参数par1*par2表示开辟的内存空间的字节大小。区别是，这个函数会对开辟出的空间初始化，malloc不会。
    // for (int i = 0; i < n; i++)
    // {
    //     *(p2 + i) = i;
    // }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p2 + i));
    }
    free(p1); // 释放指针指向的堆区的内存空间
    free(p2); // 只能释放堆区的内存空间，所以参数只能指向堆区。
    system("pause");
    return 0;
}