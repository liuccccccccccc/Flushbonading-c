#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * defangIPaddr(char * address){
    char *a=malloc(strlen(address)+7);
    int cou=0;
    for(int i=0;i<strlen(address);i++)
    {
        if(address[i]=='.')
        {
            a[cou]='[';
            a[cou+1]='.';
            a[cou+2]=']';
            cou+=3;
        }
        else
        {
            a[cou++]=address[i];
        }
    }
    a[strlen(address)+6]='\0';
    return a;

}
int main()
{
    char a[10]="1.1.1.1";
    char *d=defangIPaddr(a);
    printf("%s\n",d);
    system("pause");
    return 0;

}