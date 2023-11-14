#include<stdio.h>
#include<stdlib.h>
char* generateTheString(int n) {//1374
    char *a=malloc(n+1);
    if(n%2==0)
    {
        for(int i=0;i<n-1;i++)
        {
            a[i]='a';
        }
        a[n-1]='b';
        a[n]='\0';
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            a[i]='a';
        }
        a[n]='\0';
    }
    return a;
    
}
int main()
{
    char *a=generateTheString(100);
    printf("%s",a);
    system("pause");
    return 0;
}