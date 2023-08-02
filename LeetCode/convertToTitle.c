#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include<string.h>
void reverseString(const char *a)//倒置字符串
{
    assert(a);
    int length = strlen(a);
    char *pop = (char *)a;
    char *inp = (char *)(a + (length - 1));
    while (pop < inp)
    {
        char temp = *pop;
        *pop++ = *inp;
        *inp-- = temp;
    }
}
char *convertToTitle(int columnNumber)//给你一个整数 columnNumber ，返回它在 Excel 表中相对应的列名称。
{
    int count = 0, temp;
    char *a =(char *)malloc(100);
    while (columnNumber > 26)
    {
        temp = 64;
        temp += columnNumber % 26;
        if (temp == 64)
        {
            a[count] = 'Z';
        }
        else
        {
            a[count] = temp;
        }
        if(temp==64)
        {
                    columnNumber=columnNumber/26-1;
        }
        else
        {
                    columnNumber=columnNumber/26;

        }

        count++;
    }
    
    a[count]=columnNumber+64;
    a[count+1]='\0';
    reverseString(a);
    return a;

}
int main()
{
    char *a=convertToTitle(2147483647);
    printf("%s\n",a);
    system("pause");
    return 0;
}