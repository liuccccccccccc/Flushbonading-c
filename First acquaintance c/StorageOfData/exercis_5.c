#include <stdio.h>
unsigned char i = 0;
int main()
{
 for(i = 0;i<=255;i++)//因为i为无符号类型，所以i的范围为0-255，此时会死循环
 {
 printf("hello world\n");
}
 return 0;
}

