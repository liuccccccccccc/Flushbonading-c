#include <stdio.h>
#include <stdlib.h>

int getBitNumber(int a, int b) // 求两个整形变量   的二进制有多少个不同的bit位
{
    int c = a ^ b;
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((c & 1))
        {
            count++;
        }
        c = c >> 1;
    }

    return count;
}

int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d \n", getBitNumber(a, b));
    system("pause");
    return 0;
}