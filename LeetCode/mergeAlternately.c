#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1768
char * mergeAlternately(char * word1, char * word2){
    char *a=malloc(strlen(word1)+strlen(word2)+1);
    int l1=0,co=0;
    while(1)
    {
        if(word1[l1]=='\0'||word2[l1]=='\0')
        {
            break;
        }
        a[co]=word1[l1];
        a[co+1]=word2[l1];
        l1++;
        co+=2;

    }
    a[co]='\0';
    if(word1[l1]=='\0'&&word2[l1]=='\0')
    {
        return a;
    }
    else if(word1[l1]=='\0')
    {
        strcat(a,word2+l1);
    }
    else
    {
        strcat(a,word1+l1);
    }
    return a;
}
int main()
{
    char a[10]="1223",b[10]="abcdef";
    printf("%s\n",mergeAlternately(a,b));
    system("pause");
    return 0;
}