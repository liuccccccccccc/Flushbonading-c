#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void tranString(char *s, int k)
{
    char temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = s[i];
    }
    int l = strlen(s);
    for (int i = 0; i < l - k; i++)
    {
        s[i] = s[k + i];
    }
    for (int i = l - k, j = 0; i < l; i++, j++)
    {
        s[i] = temp[j];
    }
}

int main()
{

    char s[100];
    gets(s);
    int k;
    scanf("%d", &k);
    tranString(s, k),
    printf("%s", s);
    system("pasuse");
    return 0;
}