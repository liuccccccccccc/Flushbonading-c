#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
unsigned int MyStrlen(const char *a) // 实现库函数strlen，
{
    assert(a != NULL);
    int i = 0;
    while (*(a++) != '\0')
    {
        i++;
    }
    return i;
}
int MyStrcmp(const char *a, const char *b) // 实现库函数strcmp
{
    assert(a != NULL);
    assert(b != NULL);
    int i;
    i = MyStrlen(a) <= MyStrlen(b) ? MyStrlen(a) : MyStrlen(b);
    for (int j = 0; j < i + 1; j++)
    {
        if (a[j] > b[j])
        {
            return 1;
        }
        else if (a[j] < b[j])
        {
            return -1;
        }
    }
    return 0;
}

int main()
{
    while (1)
    {
        char a[100], b[100];
        gets(a);
        gets(b);
        printf("%d\n%d %d\n", MyStrcmp(a, b), MyStrlen(a), MyStrlen(b));
    }
    system("pause");
    return 0;
}