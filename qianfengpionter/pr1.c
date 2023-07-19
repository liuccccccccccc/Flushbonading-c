#include <stdio.h>
#include <stdlib.h>
int main()
{
    float value; 
    int count = 0;
    scanf("%f", &value);
    if (value < 1)
    {
        while (1)
        {
            value = value * 10;
            count++;
            if (value > 1)
            {
                break;
            }
        }
        printf("科学计数法表示为:%f*10的-%d次方", value, count);
    }
    else if (value >= 10)
    {
        while (1)
        {
            value = value / 10;
            count++;
            if (value < 10)
            {
                break;
            }
        }
        printf("科学计数法表示为:%f*10的%d次方", value, count);
    }
    else
    {
        printf("科学计数法表示为:%f*10的0次方",value);
    }
    system("pause");
    return 0;
}