#include <stdio.h>
#include <stdlib.h>
int Get_1_Amount(int a)//计算整数存储(负数存储的是补码)在内存中二进制中的1的个数，并返回。
{
    int count = 0;
    for (int i = 0; i < 32; i++)//一个整形变量的字节为4，占32位，所以进行32次循环，分别对每一位和1进行与运算。
    {
        if (a & 1)//为真，说明该位为1.
        {
            count++;
        }
        a = a >> 1;//每次运算后右移一位，确保每位都能够进行与运算然后判断是否为1.，为1就加1，不为就不满足，不加。最后返回1的总个数
    }
    return count;
}
int main()
{
    int number;
    scanf("%d", &number);
    int b = Get_1_Amount(number);
    printf("%d\n", b);
    system("pause");
    return 0;
}