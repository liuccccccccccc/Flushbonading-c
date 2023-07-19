#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
void reverseString(const char *a)
{
    assert(a);
    int length = strlen(a);
    char *pop = (char *)a;
    char *inp = (char *)(a + (length - 1));
    while (pop < inp)
    {
        char temp = *pop;
        *pop++ = *inp;
        *inp-- = temp;
    }
}
int main()
{
    while (1)
    {

        char a[100];
        gets(a);
        printf("倒置前%s\n", a);
        reverseString(a);
        printf("倒置后%s\n", a);
    }
    system("pause");
    return 0;
}