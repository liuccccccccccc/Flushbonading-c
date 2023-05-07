#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Toup(char *a)//把字符串中所有的小写字母转为大写字母
{
    int length=strlen(a);
    for(int i=0;i<length;i++)
    {
        if(97<=a[i]&&a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }

}
void Todown(char *a)//把字符串中的所有大写字母转为小写字母
{
    int length=strlen(a);
    for(int i=0;i<length;i++)
    {
        if(65<=a[i]&&a[i]<=90)
        {
            a[i]=a[i]+32;
        }
    }
}
void Toupdown(char *a)//把字符串中大写字母转为小写字母，同时小写字母转为大写字母
{
    int length=strlen(a);
    for(int i=0;i<length;i++)
    {
        if(65<=a[i]&&a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if (97<=a[i]&&a[i]<=122)
        {
            a[i]=a[i]-32;
        }
        
    }
}
int main()
{
    char a[100],b[100],c[100];
    gets(a),gets(b),gets(c);
    Toup(a),Todown(b),Toupdown(c);
    printf("%s\n%s\n%s\n",a,b,c);
    system("pause");
    return 0;

}