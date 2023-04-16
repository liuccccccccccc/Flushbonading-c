#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * addBinary(char * a, char * b){
    int la=strlen(a),lb=strlen(b);
    int laa=la,lbb=lb;
    int maxa= la>=lb?la:lb;
    static char copy[10000];
    for(int i=0,di=la-1;i<la;i++,di--)
    {
        copy[i]=a[di];
    }
    copy[la]='\0';
   strcpy(a,copy);
   for(int i=0,di=lb-1;i<lb;i++,di--)
    {
        copy[i]=b[di];
    }
    copy[lb]='\0';
    strcpy(b,copy);
   //printf("%s\n%s\n",a,b);
   if(strlen(a)>strlen(b))
   {
    for(int i=0;i<maxa-lb;i++)
    {
        b[lbb++]='0';
    }
   }
   else if(strlen(a)<strlen(b))
   {
    for(int i=0;i<maxa-la;i++)
    {
        a[laa++]='0';
    }
   }
   printf("%s\n%s\n",a,b);





}

int  main()
{
    char a[100]="1000101111111110";
    char b[100]="1000101111111110";
    addBinary(a,b);
    system("pause");
    return 0;
}