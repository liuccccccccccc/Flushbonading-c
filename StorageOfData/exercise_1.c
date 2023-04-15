#include <stdio.h>
int main()
{
    char a = -1;
    signed char b = -1;
    unsigned char c = -1;
    printf("a=%d,b=%d,c=%d", a, b, c);//对于c而言会先截断，再整形提升，由于是无符号数，整形提升全补0然后输出就为一个正数。
    return 0;
}