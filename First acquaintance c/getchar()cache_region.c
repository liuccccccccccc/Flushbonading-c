#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned int a=0;
    while(a!=EOF)
    {
        a=getchar();//当输入正常字符时，会读取一个字符，此时缓冲区会遗留一个换行符，然后直接用getchar()清空缓冲区。就可以确保下次输入时不会自动读取缓冲区了，可以正常输入。
        //但是！当输入crtl z 此时直接清空缓存区的数据缓存区存的
        getchar();
        printf("%d\n",a);
        printf("%c\n",a);

    }
    system("pause");
    return 0;
}