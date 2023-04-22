#include <stdio.h>
#include <stdlib.h>

void searchPrimeNumber(int a, int b) // 传入要判断的区间
{
  int count = 0;
  for (int i = a; i <= b; i++) // 遍历区间中的每个数，对其进行判断
  {
    int temp = i;
    if (i == 1)
    {
      printf("%d ", i);
      count++;
    }
    else
    {
      while (i % (temp - 1) != 0)
      {
        temp--;
      }
      if ((temp - 1) == 1)
      {
        printf("%d ", i);
        count++;
      }
    }
  }
  printf("\n");
  printf("共有素数%d个\n", count);
}
void flagNumber(int a, int b)

{
  for (int i = a; i <= b; i++)
  {
    int temp = i - 1;
    int flag = 0;
    if (i == 1)
    {
      printf("%d ", i);
    }
    else
    {
      while (1 < temp && temp < i && i % temp != 0)
      {
        temp--;
      }
      if (temp == 1)
      {
        flag = 1;
      }
      if (flag == 1) // 改进算法，根据flag的值来判断是否为素数
      {
        printf("%d ", i);
      }
    }
  }
}
int main()
{

  int a, b;
  scanf("%d %d", &a, &b);
  searchPrimeNumber(a, b);
  flagNumber(a, b);
  system("pause");
  return 0;
}
