#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char * toLowerCase(char * s){
    char *a=malloc(strlen(s)+1);
    int cout=0;
    while(cout<strlen(s))
    {  
        if(65<=s[cout]&&s[cout]<=90)
        {
           a[cout]=s[cout]+32;
        }
        else
        {
           a[cout]=s[cout];
        }
        cout++;
        
    }
    a[cout]='\0';
    return a;

}
int main()
{
    
    char *a=toLowerCase("abderrRRR");
    printf("%s\n",a);
    system("pause");
    return 0;
}