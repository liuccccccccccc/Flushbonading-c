#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int daffodilNumber(int n1, int n2, int *a)
{
    int count = 0;
    for (int i = n1; i <= n2; i++)
    {

        int sum = 0, ii = i,iii=i;
        int c=0;
        while(iii)
        {
            c++;
            iii/=10;
        }
        while (ii > 9)
        {
            int temp = ii % 10;
            sum += pow(temp, c);
            ii /= 10;
        }
        sum += pow(ii, c);
        if (sum == i)
        {
            a[count++] = i;
        }
    }
    return count;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int d[10000];
    int length = daffodilNumber(a, b, d);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", d[i]);
    }
    system("pause");
    return 0;
}