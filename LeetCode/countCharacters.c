#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int countCharacters(char (*words)[10], int wordsSize, char * chars){//1160 拼写单词
    int a[26]={0},flag=0,lsum=0,l1=strlen(chars),l2;
    
     for(int i=0;i<wordsSize;i++)
     {
         l2=strlen(words[i]);flag=0;
         for(int k=0;k<l2;k++)
         {
             a[words[i][k]-97]+=1;
         }
         for(int j=0;j<l1;j++)
         {
             a[chars[j]-97]-=1;
         }
         for(int q=0;q<26;q++)
         {
             if(a[q]>0)
             {
                 flag=1;
             }
             a[q]=0;
         }
         if(flag==0)
         {
             lsum+=l2;
         }
     }
     return lsum;
}
int main()
{
    char a[4][10]={"cat","bt","hat","tree"};
    char c[10]="atach";
    printf("%d\n",countCharacters(a,4,c));
    system("pause");
    return 0;
}