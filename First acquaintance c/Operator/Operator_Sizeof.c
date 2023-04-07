#include <stdio.h>
#include <stdlib.h>
int main()
{
    short a = 10;
    int b = 2;
    printf("a的大小为：%d,b的大小为：%d\n", sizeof(a), sizeof(b));
    printf("%d\n", sizeof(a = b + 1)); // 输出为2，计算的是a的大小
    printf("%d\n", a);                 // 输出为10，sizeof中的表达式，不参与运算

    int d = -1;
    int t = ~d; // 对a存储在内存中的二进制按位取反，因为a是负数，所以是对a的补码（11111.......1111)32位1按位取反，结果位全零，输出位0， a的值不变
    printf("t=%d\na=%d\n", t, d);
    system("pause");
    return 0;
}