#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a=9/2;//默认取整形
   float b=9/2;//被除数为整，也取整数的浮点数
   float c=9/2.0;//根据被除数的位数取小数
   int f=50;
   printf("%d\n%f\n%f\n",a,b,c);
   printf("%d\n%d\n",(!a),(!f));//！会对真取假，假取真。在c中，0为假，非零为真
   
   printf("使用三元表达式来比较俩个数字的大小\n");
   int num1,num2;
   scanf("%d %d",&num1,&num2);
   int Max=num1>num2?num1:num2;
   printf("较大值为%d\n",Max);
   char R =(char) f;//强制转换的格式为 type 变量 =(type) 被强制转换的变量 如果强制转换数字为字符，字符的值为数字对应的ascii码值所对应的字符
   printf("%c\n",R);
    system("pause");
    return 0;
}