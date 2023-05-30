#include <stdlib.h>
#include <stdio.h>
int main()
{
    FILE *fr = fopen("data3.txt", "r");
    if (fr == NULL)
    {
        perror("fopen");
        return 1;
    }
    FILE *fw = fopen("data4.txt", "w");
    if (fw == NULL)
    {
        perror("fopen");
        fclose(fr);
        fr = NULL;
        return 1;
    }
    int i;
    while ((i = fgetc(fr)) != EOF)
    {
        fputc(i, fw);
    }
    if (feof(fr))
    {
        printf("正常结束\n");
    }
    else if (ferror(fr))
    {
        printf("失败结束\n");
    }
    system("pause");
    return 1;
}