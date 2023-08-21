#include<stdio.h>
#include<stdlib.h>
#include<string.h>//给你一个字符串 s ，仅反转字符串中的所有元音字母，并返回结果字符串。元音字母包括 'a'、'e'、'i'、'o'、'u'，且可能以大小写两种形式出现不止一次。
char * reverseVowels(char * s){
    int l=strlen(s),count=0;
    char *a=malloc(l+1);
    char d[l];
    for(int i=0;i<l;i++)
    {
        if(s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117||s[i]==65||s[i]==69||s[i]==73||s[i]==79||s[i]==85)
        {
            d[count++]=s[i];
        }
    }
    int i;
    for(i=0;i<l;i++)
    {
         if(s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117||s[i]==65||s[i]==69||s[i]==73||s[i]==79||s[i]==85)
        {
            a[i]=d[count-1];
            count--;
        }
        else
        {
            a[i]=s[i];
        }
    }
    a[i]='\0';
    return a;

}

int main()
{
    char a[100]="hello";
    char *t=reverseVowels(a);
    printf("%s\n",t);
    system("pause");
    return 0;
}
