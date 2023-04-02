#include <stdio.h>
#include <stdlib.h>
int count_9(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 10 == 9)
        {
            count++;
        }
        if (i / 10 == 9)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n = 100;
    printf("%d\n", count_9(n));
    system("pause");
    return 0;
}