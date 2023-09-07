#include<stdio.h>
#include<stdlib.h>//541 反转字符串II
#include<string.h>
void re(char *a,int k)
{
    int temp;
     for(int i=0,j=k-1;i<k/2;i++,j--)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}


char * reverseStr(char * s, int k){
    char *d=s;
    while(1)
    {
        if(strlen(s)>2*k)
        {
           re(s,k);
            s=s+2*k;
        }
        else if(strlen(s)<k)
        {
            re(s,strlen(s));
            break;
        }
        else
        {
            re(s,k);
            break;
        }
    }
   
   return d;

}
int main()
{
    char a[12]="abcdabcdab";
    char *c=reverseStr(a,2);
    printf("%s\n",c);
    system("pause");
    return 0;

}