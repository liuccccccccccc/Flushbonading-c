#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

int MyStrlen1(const char *a) // 实现库函数strlen，
{
    assert(a != NULL);
    int i = 0;
    while (*(a++) != '\0')
    {
        i++;
    }
    return i;
}

char *MyStrcpy(char *to,const char *from)//实现库函数strcpy
{
    int len=MyStrlen1(from);
    for(int i=0;i<=len;i++)
    {
        *(to+i)=*(from+i);
    }
    return to;
}
int main()
{
    
    char a[]="1235959";
    char b[]="ABCDE";
    // gets(a);gets(b);
    MyStrcpy(a,b);
    printf("%s\n%s\n",a,b);
    system("pause");
    return 0;
}