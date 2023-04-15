#include <stdio.h>
#include<stdlib.h>

int main()
{
    char a = -128;
    printf("%u\n", a); //1000000会先提升因为是有符号数，所以全补1，然后会输出一个很大的正数
    system("pause");
    return 0;
}
