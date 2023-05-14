#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
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
char *myStrcat(char *a, const char *b)//实现库函数strcat
{
    assert(a!=NULL);
    assert(b!=NULL);
    
    // int len1=MyStrlen1(a),len2=MyStrlen1(b);
    // char *temp=a+len1;
    // for(int i=0;i<len2+1;i++)
    // {
    //     *(temp++)=*(b++);
    // }
    //return a;
    char *c=a;//改进算法，不用求字符串的长度
    while(*a)
    {
        a++;
    }
    while(*a++=*b++)
    {
        ;
    }
    return c;
}

int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    printf("%s\n%s\n",myStrcat(a,a),a);
    gets(a);
    gets(b);
    printf("%s\n%s\n",strcat(a,b),a);
    system("pause");
    return 0;
}