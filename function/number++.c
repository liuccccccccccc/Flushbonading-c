#include<stdio.h>
#include<stdlib.h>
void numberAdd(int *d)
{
  (*d)++;
  
}

int main()
{
    int number=0;
    numberAdd(&number);
    printf("%d\n",number);
    numberAdd(&number);
    printf("%d\n",number);
    system("pause");
    return 0;
}