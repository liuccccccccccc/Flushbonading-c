#include<stdio.h>
#include<stdlib.h>

int main()
{
 int n = 9;
 float *pFloat = (float *)&n;
 printf("n的值为：%d\n",n);
 printf("*pFloat的值为：%f\n",*pFloat);//存储在计算机中的整形数，被看作浮点数打印，0 00000000 00000000000000000001001  三部分分别是符号位，上角标位(科学计数法2的上角标），以及科学计数法的前半身（1.后面的数），然后就会打印出来一个很小的2的1-127次方接近于0
 *pFloat = 9.0;
 printf("num的值为：%d\n",n);
 printf("*pFloat的值为：%f\n",*pFloat);
 system("pause");
 return 0;
}