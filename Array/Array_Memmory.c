#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {0};
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < sz; ++i)
    {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }
    printf("%p", arr); // 数组的首地址就是一个指针，存放的是第一个元素的地址，arr=&arr[0];
    system("pause");
    return 0;
}