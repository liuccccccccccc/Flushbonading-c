#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rever(char *s)//504，转七进制
{
    int l=strlen(s),temp;
    for(int i=0,j=l-1;i<l/2;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}

char * convertToBase7(int num){
    char *a =malloc(20);
    int flag=0,count=0;
    if(num<0)
    {
        flag=1;
        num=-num;
    }
    if(num==0)
    {
        a[0]='0';
        a[1]='\0';
        return a;
    }
    while(1)
    {   if(num==0)
        {
            break;
        }
        if(num%7!=0)
        {
            a[count++]=(num%7)+48;
            num=(num-num%7)/7;
        }
        else if(num%7==0)
        {
            a[count++]=48;
            num=num/7;
        }
    }
    if(flag==1)
    {
        a[count++]='-';
    }
    a[count]='\0';
    rever(a);
    return a;

}
int main()
{   int a=-20901;
    char *s=convertToBase7(a);
    printf("%s\n",s);
    system("pause");
    return 0;
}