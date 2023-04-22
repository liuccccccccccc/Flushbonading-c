#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void Guess(int i)
{
    switch (i)
    case 1:
    {
        {
            srand(time(0));                  // 根据时间当做每次生成随机数的种子，确保每次生成的随机数不一样
            int randomnumber = rand() % 101; //%n后跟随机数的范围为0—n-1，如果没有srand函数提供不同的种子，则会每次生成的随机数都一样
            while (1)
            {
                printf("请输入你猜的数字(1-100);");
                int b;
                scanf("%d", &b);
                if (b == randomnumber)
                {
                    printf("恭喜你猜对了，游戏结束了。请你选择接下来的操作\n");
                    break;
                }
                else if (0 < b && b < randomnumber)
                {
                    printf("猜小了，继续猜\n");
                }
                else if (randomnumber < b && b < 101)
                {
                    printf("猜大了，继续猜\n");
                }
                else
                {
                    printf("你输入的数字不在范围内\n");
                }
            }
        } 
        break;
    case 2:
    {
        printf("Game over\n");
        system("pause");
        exit(0);
    }
    break;
    default:
    {
        printf("你输入的格式不正确，请输入正确的数字\n");
    }
    }
}
int main()
{

    while (1)
    // system("cls");
    {
        printf("1############play\n2############exit\n");
        int i;
        printf("请输入你要进行的操作;");
        scanf("%d", &i);
        Guess(i);
    }
    return 0;
}