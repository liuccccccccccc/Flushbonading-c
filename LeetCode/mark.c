#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = a[0], max = a[0], sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += a[i];
        if (min > a[i])
        {
            min = a[i];
        }
        if (max < a[i])
        {
            max = a[i];
        }
    }
    sum -=(max+min);
    float ave=sum/5.0;
    printf("%.2f",ave);
    system("pause");
    return 0;
}