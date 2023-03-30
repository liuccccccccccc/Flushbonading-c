#include <stdio.h>
#include <stdlib.h>

void sortNumber(int a, int b, int c) // 这种排序方式不改变变量的值，相当于根据变量之间的大小关系，按照变量从大到小的顺序输出。
{
    if (a >= b && a >= c)
    {
        printf("%d ", a);
        if (b >= c)
        {
            printf("%d %d\n", b, c);
        }
        else
        {
            printf("%d %d\n", c, b);
        }
    }
    else if (b > a && b >= c)
    {
        printf("%d ", b);
        if (a >= c)
        {
            printf("%d %d\n", a, c);
        }
        else
        {
            printf("%d %d\n", c, a);
        }
    }
    else if (c > b && c > a)
    {
        printf("%d ", c);
        if (b >= a)
        {
            printf("%d %d\n", b, a);
        }
        else
        {
            printf("%d %d\n", a, b);
        }
    }
}

void miniSort(int a, int b, int c) // 交换了变量的值，使其按照固定的变量顺序输出
{
    if (a <= c)
    {
        int temp;
        temp = a;
        a = c;
        c = temp;
    }
    if (a <= b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    if (b <= c)
    {
        int temp;
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d %d %d\n", a, b, c);
}

int main()
{
    
    
        int a, b, c;
        printf("输入三个数:");
        scanf("%d %d %d", &a, &b, &c);
        // sortNumber(a,b,c);
        miniSort(a, b, c);
    

    system("pause");
    return 0;
}