#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int halvesAreAlike(char* s) {//1704
    int l=strlen(s),c1=0,c2=0;
    char a[l/2+1],b[l/2+1];
    for(int i=0;i<l/2;i++)
    {
        a[i]=s[i];
        b[i]=s[i+(l/2)];
    }
    a[l/2]='\0',b[l/2]='\0';
    char t[11]="aeiouAEIOU";
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<l/2;j++)
        {
            if(t[i]==a[j])
            {
                c1++;
            }
            if(t[i]==b[j])
            {
                c2++;
            }
        }

    }
    if(c1==c2)
    {
        return 1;
    }
    return 0;

    
}
int main()
{
    char a[10]="book";
    printf("%d\n",halvesAreAlike(a));
    system("pause");
    return 0;
}