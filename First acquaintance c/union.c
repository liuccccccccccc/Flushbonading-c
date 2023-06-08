#include<stdio.h>
#include<stdlib.h>
union A
{
    char a[7];
    int b;
};
union B
{
    char a[8];
    int b;
};
int main()
{
    printf("%d %d",sizeof(union A),sizeof(union B));
    system("pause");
    return 0;
}

