#include <stdio.h>
#include <stdlib.h>
void init(int a[], int n) // 初始化数组
{
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
}

void print(int a[], int n) // 打印数组
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%-2d]=%-2d ", i, a[i]);
    }
    printf("\n");
}
void Reversed_Array(int a[], int n) // 逆序数组
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp;
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main()
{

    int a[100];
    int count = 0;
    while (1)
    {
        scanf("%d", &a[count]);
        if (a[count] == 00)
        {
            break;
        }
        count++;
    }
    int n = count;
    print(a, n);
    Reversed_Array(a, n);
    print(a, n);
    init(a, n);
    print(a, n);

    system("pause");
    return 0;
}
