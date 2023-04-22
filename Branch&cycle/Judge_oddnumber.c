#include <stdlib.h>
#include <stdio.h>
void Judge(int a, int b)
{
  while (a <= b)
  {
    if (0 == a % 2)
    {
      a++;
    }
    else
    {
      printf("%d ", a);
      a++;
    }
  }
} 
int main()
{
  Judge(1, 100);
  system("pause");
  return 0;
}
