#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int vaildBrac(const char *s)
{
    assert(s);
    char a[100];
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
        {
            a[count++] = s[i];
        } //            (([]){}) ([)]  (())]
        else
        {
            if (count == 0)
            {
                return 0;
            }
            else if (a[count - 1] == '{' && s[i] == '}')
            {
                count--;
            }
            else if (a[count - 1] == '[' && s[i] == ']')
            {
                count--;
            }
            else if (a[count - 1] == '(' && s[i] == ')')
            {
                count--;
            }
            else
            {
                return 0;
            }
        }
    }
    if (count == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    char s[100] = "(([]){})";
    int a = vaildBrac(s);
    if (a == 0)
    {
        printf("假\n");
    }
    else
    {
        printf("真\n");
    }
    system("pause");
    return 0;
}