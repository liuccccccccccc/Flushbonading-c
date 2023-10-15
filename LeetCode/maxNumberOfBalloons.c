#include<stdio.h>
#include<stdlib.h>
#include<string.h>//1189
int min(int a,int b)
{
    return a<b?a:b;
}
int maxNumberOfBalloons(char * text){
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<strlen(text);i++)
    {
        a[text[i]-97]+=1;
    }
    a[11]=a[11]/2;
    a[14]=a[14]/2;
    return min(min(min(a[1],a[0]),min(a[11],a[14])),a[13]);
}
int main()
{
    char a[100]="loonbalxballpoon";
    printf("%d ",maxNumberOfBalloons(a));
    system("pause");
    return 0;
}