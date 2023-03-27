#include<stdlib.h>
#include<stdio.h>
#define Add(x,y) ((x)+(y))//定义宏 ，宏在调用时其名字时会被后面的操作体替代，所以要注意后面的运算先后顺序
int main()
{
    int a=2,b=5;
    printf("%d\n",4*Add(a,b));
    system("pause");
    return 0;
}
