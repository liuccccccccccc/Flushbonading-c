#include<stdio.h>
#include<stdlib.h>

// void print()
// {
//     printf("成为嵌入式工程师\n");
// }
// void func()//嵌套调用了print函数。
// {
//     print();
// }
// int main()
// {

//     for(int i = 0;i<3;i++)
//     {
//         func();
//     }
//     //上面演示了嵌套调用

//     system("pause");
//     return 0;

// }



int Add(int i, int b)
{
    return i+b;
}
int main()
{
   printf("%d\n",Add(3,4));//像这种就是链式访问。直接使用函数的返回值，就是把函数的返回值作为另外一个函数的参数。//自定义函数的链式访问
   printf("%d",printf("%d",printf("%d",20)));printf("\n");//printf是系统库函数，当链式访问时，会使用到其的返回值，printf的返回值为字符的个数 结果是 20 2 1
   printf("%d\n",printf("%d\n",printf("%d\n",20)));//这个/n也占一个长度，返回值加1结果是  20 3 2 
   system("pause");
   return 0;
}