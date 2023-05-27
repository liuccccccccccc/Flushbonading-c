#include<stdio.h>
#include<stdlib.h>
struct softArr
{
    int n;
    int b[];//不声明数组的大小，在定义变量时，根据malloc函数在堆区开辟一定的长度，从而决定数组的长度，这就是柔型数组。
};//柔性数组对3类型来说不算长度，sizeof(sturct softArr)值为4.
int main()
{
      struct  softArr* p1=malloc(sizeof(struct softArr)+10*sizeof(int));//在动态内存开辟了一段空间，为结构体变量，数组长度为10.
      struct  softArr* p2=malloc(sizeof(struct softArr)+11*sizeof(int));//在动态内存开辟了一段空间，为结构体变量，数组长度为11.
      
      if(p1==NULL||p2==NULL)
      {
        return 1;
      }
      printf("%d %d\n",sizeof(p1->n),sizeof(p1->b[9]));
      printf("%d %d\n",sizeof(p1->n),sizeof(p1->b[10]));
      free(p1);free(p2);
      system("pause");
      return 0;
}
