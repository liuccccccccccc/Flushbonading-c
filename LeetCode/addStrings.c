#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//字符串相加
void rever(char *a)
{
    int l=strlen(a);
    char temp;
    for(int i=0,j=l-1;i<l/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
char * addStrings(char * num1, char * num2){
    rever(num1);rever(num2);
    int count=0,l=strlen(num1)>strlen(num2)?strlen(num1):strlen(num2);
    int t=l+2;
    char *c=malloc(l+2);
    char aa[t];
    char bb[t];
    for(int i=0;i<t;i++)
    {
        aa[i]=0;
        bb[i]=0;
    }
    strcpy(aa,num1);strcpy(bb,num2);
    int i=0;
    for(i=0;i<l;i++)
    {
        if(aa[i]=='\0')
        {
            aa[i]='0';
        }
        if(bb[i]=='\0')
        {
            bb[i]='0';
        }
        if(aa[i]+ bb[i]+count-48>57)
        {
            c[i]=aa[i]+bb[i]+count-58;
            count=1;
        }
        else
        {
           
            c[i]=aa[i]+bb[i]+count-48; 
            count=0;
        }
    }
    if(count==1)
    {
        c[l]='1';
        c[l+1]='\0';
    }
    else
    {
        c[l]='\0';
    }
    rever(c);
    return c;
}

int main()
{
    char a[10]="82978",b[10]="75";
    char *c=addStrings(a,b);
    printf("%s\n",c);
    system("pause");
    return 0;
}