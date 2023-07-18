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
        int b=pow(10,i)+0.1;
        temp+=(((int)*(a++)-48)*b);
    }
    return temp;
}
int main()
{
    char a[100];
    gets(a);
    int value=stringExInt(a);
    printf("%d\n",value);
    system("pause");
    return 0;


}