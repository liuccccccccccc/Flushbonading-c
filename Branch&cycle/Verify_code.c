#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int verify(char a[],char b[])
{
    int i = strcmp(a,b);
    return i;
}

int main()
{
    char a[] ="123456fff";
    int i=1;
    printf("请输入你的密码，你只有三次机会\n");
    while(1)
    {
      if (i < 4)
     {
      char b[100] ;
      scanf("%s",b);
         if(verify(a,b)==0)
             {
               printf("密码正确 !!!welcome!!\n");
               break;
              }
         else
             {
               i++;
               if(4-i>0)
              {
               printf("密码错误！！！你还剩%d次机会\n",4-i);
              }
               else
              {
               printf("非常抱歉，你已经没机会了\n");
              }
            }      
      }
       else
      {
    break;
    
      }
    }
    system("pause");
    return 0;
}