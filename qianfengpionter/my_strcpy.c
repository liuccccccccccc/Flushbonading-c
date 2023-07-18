#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
void myStrcpy(char *dest, const char *src)
{
    assert(dest);
    assert(src);
    const char *temp=src;
    while (*temp++ != '\0')
    {
        *dest++ = *src++;
    }
    *dest='\0';

    
}
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    printf("%s\n%s\n",a,b);
    myStrcpy(a,b);
    printf("%s\n%s\n",a,b);
    system("pause");
    return 0;
}