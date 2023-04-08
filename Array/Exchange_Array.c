#include <stdio.h>
#include <stdlib.h>

void Exchange_Array(int a[], int b[], int n1)
{
    for (int i = 0; i < n1; i++)
    {
        int temp;
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void print(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%-2d]=%d ", i, a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("b[%-2d]=%d ", i, b[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {10, 11, 12, 13, 14, 15, 16};
    printf("交换前：\n");
    print(a, b, 6);
    printf("交换后：\n");
    Exchange_Array(a, b, 6);
    print(a, b, 6);
    system("pause");
    return 0;
}