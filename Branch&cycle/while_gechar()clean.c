#include<stdio.h>
#include<stdlib.h>
int main()

{
   int a=getchar();//输入一个字符，返回值是int(字符的ASCII码值，如果获取没有正确输入，返回值是EOF)
   printf("%d\n",a);
   printf("%c\n",a);
   putchar(a);
   printf("\n");//输出单个字符
   int b=getchar();//第一次输入时，会按下回车键，所以这次输入会从缓冲区读取回车键这个字符，不能输入。
   printf("%d\n",b);
   char ch[10];
   scanf("%s",ch);//在输入字符串时，会通过enter来截至输入，enter会被当做一个字符留在缓冲区，所以getchar()会自动读取缓冲区的一个字符。
   printf("%s\n",ch);
   //getchar()//可以通过getchar()清理缓冲区的单个字符。
   int clean_value;
   while(clean_value=getchar()!='\n')
   {

   }//可以通过这段循环来清理缓冲区的所有字符
   int c = getchar();
   while(c!=EOF)//所以会自动进入循环语句，然后进行判断。不会让用户通过键盘输入。
   {
    if(c=='A')
    {
        printf("ok");break;
    }
    else
    {
        printf("no");break;
    }
   }



   system("pause");
    return 0;

}