#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* reformatDate(char* date) {
    char a[12][4]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int l=strlen(date),lo1,lo2;
    char *c=malloc(l);
    for(int i=0;i<l;i++)
    {
        if(date[i]==' ')
        {
            lo1=i+1;
            break;
        }
    }
    lo2=l-4,date[lo1-1]='\0',date[lo2-1]='\0';
    strcpy(c,date+lo2);
    c[4]='-';
    for(int i=0;i<12;i++)
    {
        if(strcmp(a[i],date+lo1)==0)
        {
            if(i+1<10)
            {
                c[5]='0';
                c[6]=48+i+1;
                c[7]='-';
                break;
            }
            else
            {
                c[5]='1';
                c[6]=(i+1)%10+48;
                c[7]='-';
                break;
            }
        }
    }
    if(strlen(date)==4)
    {
        c[8]=date[0];
        c[9]=date[1];
        c[10]='\0';
    }
    else
    {
        c[8]='0';
        c[9]=date[0];
        c[10]='\0';
    }
    return c;

}
int main()
{
    char a[20]="20th Oct 2052";
    char *c=reformatDate(a);
    printf("%s\n",c);
    system("pause");
    return 0;
}