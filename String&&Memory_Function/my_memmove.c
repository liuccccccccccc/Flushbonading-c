#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void *myMemmove(void *a, const void *b, unsigned int n)
{
    assert(a && b);
    void *cp = a;

    // char temp[n];
    // char *lf=temp;
    // for(int i=0; i<n; i++)
    // {
    //     temp[i]=*(((const char *)b)+i);
    // }
    // while(n--)
    // {
    //     *((char *)a++)=*lf++;
    // }
    size_t len = n; // 改进算法
    if (a < b)
    {
        while (n--)
        {
            *((char *)a++) = *((const char *)b++);
        }
    }
    else
    {
        while (n--)
        {
            *((char *)a + n) = *((const char *)b + n);
        }
    }

    return cp;
}
int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[5] = {6, 6, 6, 6, 6};
    int d = 0, e = 1111;
    int *c = (int *)myMemmove(a, a, 40);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d ", d);
    system("pause");
    return 0;
}