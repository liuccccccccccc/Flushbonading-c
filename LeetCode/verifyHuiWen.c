#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int  isPalindrome(char * s){
    assert(s);
    int i=0,j=0;
    while(s[i]!='\0')
    {
        if(65<=s[i]&&s[i]<=90)
        {
           s[i]+=32;
        }
        if((97<=s[i]&&s[i]<=122)||(48<=s[i]&&s[i]<=57))
        {
            s[j++]=s[i++];
       }
       else
       {
        i++;
       }
        
    }
    s[j]='\0';
    for(i=0,j=strlen(s)-1;i<strlen(s)/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
          return 0;
        }
    }
    return 1;

    

}
int main()
{
    char a[100]="A man, a plan, a canal: Panama";
    int v=isPalindrome(a);
    printf("%d",1);
    system("pause");
    return 0;
}