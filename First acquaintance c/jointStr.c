#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void jointStr(char *src,const char *des)
{
    int length=strlen(src);
    while(*des!='\0')
    {
        *(src+length)=*des;
        src++;
        des++;
    }
    *(src+length)='\0';
}
int main()
{
    char src[100],des[100];
    gets(src);
    gets(des);
    printf("%s  %s\n",src,des);
    jointStr(src,des);
    printf("%s  %s\n",src,des);
    system("pause");
    return 0;
}