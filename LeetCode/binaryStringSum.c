#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *addBinary(char *a, char *b)//求二进制字符串的和
{
    static char copy[10000]={0};
    int la = strlen(a), lb = strlen(b);
    int laa = la, lbb = lb, i = 0;
    int maxa = la >= lb ? la : lb;
    for (int i = 0, di = la - 1; i < la; i++, di--)
    {
        copy[i] = a[di];
    }
    copy[la] = '\0';
    strcpy(a, copy);
    i = 0;
    while (copy[i])
    {
        copy[i++] = '\0';
    }
    for (int i = 0, di = lb - 1; i < lb; i++, di--)
    {
        copy[i] = b[di];
    }

    copy[lb] = '\0';
    strcpy(b, copy);
    // printf("%s\n%s\n",a,b);
    i = 0;
    while (copy[i])
    {
        copy[i++] = '\0';
    }
    char bb[10000]={0};
     char aa[10000]={0};
     strcpy(bb,b);
     strcpy(aa,a);
    if (strlen(a) > strlen(b))
    {
        for (i = 0; i < maxa - lb; i++)
        {
            bb[lbb++] = '0';
        }
    }
    else if (strlen(a) < strlen(b))
    {
        for (i = 0; i < maxa - la; i++)
        {
            aa[laa++] = '0';
        }
    }
    //    printf("%s\n%s\n",a,b);

    for (i = 0; i < maxa; i++)
    {
        if (aa[i] + bb[i] + copy[i] == 97)
        {
            copy[i] = '1';
        }
        else if (aa[i] + bb[i] + copy[i] == 96)
        {
            copy[i] = '0';
        }
        else if (aa[i] + bb[i] + copy[i] == 98)
        {
            copy[i] = '0';
            copy[i + 1] = '1';
        }
        else if (aa[i] + bb[i] + copy[i] == 146)
        {
            copy[i] = '0';
            copy[i + 1] = '1';
        }
          else if(aa[i]+bb[i]+copy[i]==145)
        {
            copy[i]='1';
        }
        else
        {
            copy[i] = '1';
            copy[i + 1] = '1';
        }
    }
    strcpy(aa, copy);
    int copyl = strlen(copy);
    for (i = 0, la = copyl - 1; i < copyl; i++, la--)
    {
        copy[i] = aa[la];
    }
    return copy;
}

int main()
{
    while(1)
    {
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    char *d = addBinary(a, b);
    printf("%s", d);
    }
    system("pause");
    return 0;
}