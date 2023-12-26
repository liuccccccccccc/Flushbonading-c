#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * modifyString(char * s){//1576
    char a[3]="abc";
    int l=strlen(s);
    int c=0;
    for(int i=1;i<l-1;i++)
    {
        if(s[i]=='?')
        {
            c=0; 
        while(1)
        {
            s[i]=a[c];
            if(s[i]!=s[i-1]&&s[i]!=s[i+1])
            {
                break;
            }
            c++;
        }
         }
        
    }
    if(s[0]=='?')
    {
        c=0;
         while(1)
        {
            s[0]=a[c];
            if(s[0]!=s[1])
            {
                break;
            }
            c++;
        }
    }
    if(s[l-1]=='?')
    {
        c=0;
         while(1)
        {
            s[l-1]=a[c];
            if(s[l-1]!=s[l-1-1])
            {
                break;
            }
            c++;
        }
    }
    return s;

}
int main()
{
    char a[10]="abc??cba";
    char *c=modifyString(a);
    printf("%s\n",c);
    system("pause");
    return 0;
}