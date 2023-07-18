#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int myStrcpy(const char *sr1, const char *sr2)
{
    assert(sr1 && sr2);
    while (*sr1 != '\0' || *sr2 != '\0')
    {
        if (*sr1 > *sr2)
        {
            return 1;
        }
        else if (*sr1 < *sr2)
        {
            return -1;
        }
        sr1++;
        sr2++;
    }
    return 0;
}
int main()
{
    char sr1[100], sr2[100];
    while (1)
    {

        gets(sr1);
        gets(sr2);
        int value = myStrcpy(sr1, sr2);
        if (value > 0)
        {
            printf("前者大\n");
        }
        else if (value)
        {
            printf("后者大\n");
        }
        else
        {
            printf("相等\n");
        }
    }
    system("pasue");
    return 0;
}