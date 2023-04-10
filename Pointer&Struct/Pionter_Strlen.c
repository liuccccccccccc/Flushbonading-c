#include<stdio.h>
#include<stdlib.h>
int Strlen(char a[])
{
   char *e=&a[0];
   while(*(a)!='\0')
   {
    a++;
   } 
   return a-e;  //在连续的一段地址上，地址相减得到的是之间元素的个数。
}

int main()
{
    char  a[]={"qwerty999000"};
    printf("%d \n",Strlen(a));
    system("pause");
    return 0;

}