#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int wordPattern(char * pattern, char * s){
    char *temp=s;
    int wordNum=0;
    while(*temp!='\0')
    {
        if(*temp++==' ')
        {
            wordNum++;
        }
    }
    wordNum++;
    if(wordNum!=strlen(pattern))
    {
        return 0;
    }
    int a[wordNum],d=0,l=strlen(s);
    a[d]=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            a[(d+1)]=i+1;
            d++;
            s[i]='\0';
        }
    }
    for(int i=0;i<wordNum-1;i++)
    {
        for(int j=i+1;j<wordNum;j++)
        {
            int res=strcmp(&s[a[i]],&s[a[j]]);
            if((pattern[i]==pattern[j]&&res!=0)||(pattern[i]!=pattern[j]&&res==0))
            {
                return 0;
            }
        }
   }
   return 1;

}
int main()
{
    char a[3]="aab";
    char b[100]="word word dd";
    printf("%d\n",wordPattern(a,b));
    system("pause");
    return 0;
}