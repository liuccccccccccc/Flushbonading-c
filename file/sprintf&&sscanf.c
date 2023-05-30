#include<stdio.h>
#include<stdlib.h>
struct A
{
    int a;
    char b[100];
    float c;
};

int main()
{
    struct A a={1,"12345",2.000};
    struct A c;
    char temp[100];
    sprintf(temp,"%d%s%f",a.a,a.b,a.c);//把一个格式化的数据，转换成字符串
    printf("%s\n",temp);
    sscanf(temp,"%d%s%f",&c.a,c.b,c.c);
    printf("%d %s %f\n",a.a,a.b,a.c);//把字符串还原为格式化数据。
    system("pause");
    return 1;
}
