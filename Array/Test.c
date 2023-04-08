#include <stdio.h>
#include <stdlib.h>
int Fuc(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * Fuc(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d!=%d\n", n, Fuc(n));
    system("pause");
    return 0;
}