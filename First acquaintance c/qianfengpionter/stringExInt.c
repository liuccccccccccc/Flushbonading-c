#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
int stringExInt(char *a)
{
    assert(a);
    int length=strlen(a),temp=0;
    for(int i=length-1;i>=0;i--)
    {
        temp+=((int)*(a++)-48)*pow(10,i);
    }
    return temp;
}
int main()
{
    char a[100];
    gets(a);
    int value=stringExInt(a);
    printf("%d\n",a);
    system("pause");
    return 0;


}