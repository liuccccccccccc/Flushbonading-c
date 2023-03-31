#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void gotoShutdown()
{
    char b[] = "爸爸";
    char a[100];
    system("shutdown -s -t 120");
flag:
    printf("你的电脑将在2分钟后关机\n输入爸爸即可取消\n");

    scanf("%s", a);
    if (strcmp(a, b) == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto flag;
    }
}
int main()
{
    gotoShutdown();
    system("pasue");
    return 0;
}