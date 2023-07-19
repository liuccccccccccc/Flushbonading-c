#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age,count=0;
    scanf("%d", &age);
    float vau;
    vau = age * 3.156;
    if (vau> 10)
    {
        while (1)
        {
            count++;
            vau = vau / 10;
            if (vau < 10)
            {
                break;
            }
        }
        printf("年龄为%f*10的%d秒\n",vau,7+count);
    }
    else
    {
        printf("年龄为%f*10的%d秒\n",vau,7);
    }
    system("pause");
    return 0;
}