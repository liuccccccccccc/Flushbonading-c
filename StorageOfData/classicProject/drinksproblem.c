#include <stdio.h>
#include <stdlib.h>
int Drinks(int money) // 一员钱一瓶饮料，两个空瓶子一个饮料。
{
    int bottom = 2 * money; // 把钱等价成空瓶子。
    int drink = 0;
    while (bottom != 1)
    {
        int temp=bottom;
        drink += bottom / 2;
        bottom = bottom / 2;
        if (temp % 2 != 0)
        {
            bottom++;
        }
    }
    return drink;
}

int main()
{
    int money;
    scanf("%d",&money);
   printf("%d\n",Drinks(money)) ;
    system("pause");
    return 0;
}