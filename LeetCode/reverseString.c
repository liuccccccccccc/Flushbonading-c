#include<stdio.h>
#include<stdlib.h>

void reverseString(char* s, int sSize){
    char temp;
    for(int i=0,j=sSize-1;i<sSize/2;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }

}
int main()
{
   char a[5]={'a','b','c','d','e'};
   reverseString(a,5);
   for(int i=0;i<5;i++)
   {
    printf("%c ",a[i]);
   }
   system("pause");
   return 0;
}