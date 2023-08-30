#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hammingDistance(int x, int y)
{
    int dif = 0, temp1 = 0, temp2 = 0, count = 0;
    int max = x > y ? x : y;
    int a, b;
    while (1)
    {
        if ((x & 1) != (y & 1))
        {
            dif++;
        }
        temp1 += (x & 1) * pow(2, count);
        temp2 += (y & 1) * pow(2, count);
        if (temp1 == max || temp2 == max)
        {
            break;
        }
        count++;
        x >>= 1;
        y >>= 1;
    }
    return dif;
}
int main()
{
    printf("%d\n", hammingDistance(1, 4));
    system("pause");
    return 0;
}