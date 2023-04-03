#include <stdio.h>
#include<stdlib.h>

int main()
{
 int arr[3][4];
 int i = 0;
 for(i=0; i<3; i++)
 {
 int j = 0;
 for(j=0; j<4; j++)
 {
 printf("&arr[%d][%d] = %p\n", i, j,&arr[i][j]);//二维数组的元素地址分配也是连续的，元素和元素之间，行和行之间的元素也是连续的。
 }
 }
 printf("%p\n%p\n",arr[1],&arr[1][0]);//二维数组名加行的下标也是一个指针，表示当前行的首地址，例如,arr[1]=&arr[1][0]
 system("pause");
 return 0;
}