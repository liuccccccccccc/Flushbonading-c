#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int myStrlen(const char *a)
{
    assert(a);
    if (*a++ == '\0')
    {
        return 0;
    }
    return 1 + myStrlen(a);
}
int main()
{
    char a[100];
    gets(a);
    printf("%d\n", myStrlen(a));
    system("pause");
    return 0;
}