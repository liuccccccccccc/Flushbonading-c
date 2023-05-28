#include <stdio.h>
#include <stdlib.h>
void printX(int n)
{
    int len;
    if (n % 2 == 0)
    {
        len = n / 2;
    }
    else
    {
        len = n / 2 + 1;
    }
    for (int i = 1; i <= len; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        printf("*");
        if ((n - 2 * i) < 0)
        {
            printf("\n");
            continue;
        }
        for (int k = 1; k <= n - 2 * i; k++)
        {

            printf(" ");
        }
        printf("*\n");
    }
    for (int i = n / 2; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (int k = 1; k <= n - 2 * i; k++)
        {

            printf(" ");
        }
        printf("*\n");
    }
}

int main()
{
    while (1)
    {

        int n;
        scanf("%d", &n);
        printX(n);
    }
    system("pause");
    return 0;
}