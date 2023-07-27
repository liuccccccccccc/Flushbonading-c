#include <stdio.h>
#include <stdlib.h>
int str(char *a, char *b)
{
    char *temp = a;
    char *a2 = a;
    char *b2 = b;
    while (*a != '\0')
    {
        b = b2;
        if (*a == *b)
        {
            temp = a;
            while (*a++ == *b++)
            {
                if (*b == '\0')
                    return temp - a2;
            }
            a = temp + 1;
        }
        else
        {
            a++;
        }
    }
    return -1;
}
int main()
{

    char a[100], b[100];
    while (1)
    {

        gets(a);
        gets(b);
        int va = str(a, b);
        printf("%d\n", va);
    }
    system("pause");
    return 0;
}