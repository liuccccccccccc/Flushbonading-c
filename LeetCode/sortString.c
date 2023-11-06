#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* sortString(char* s) {//1370
    int a[26]={0};
    char *temp=s;
    while(*s!='\0')
    {
        a[*s-97]+=1;
        s++;
    }
    int i=0,co=0,falg;
    while(1)
    {
        if(co==strlen(temp))
        {
            break;
        }
        i=0;
        for(;i<26;i++)
        {
            if(a[i]>0)
            {
                temp[co++]=i+97;
                a[i]-=1;
                falg=1;
            }
        }
        i--;
        for(;i>=0;i--)
        {
             if(a[i]>0)
            {
                temp[co++]=i+97;
                a[i]-=1;
                falg=1;
            }
        }
    }
    return temp;
}
int main()
{
    char c[10]="aaabbccoo";
    printf("%s\n",sortString(c));
    system("pause");
    return 0;
}