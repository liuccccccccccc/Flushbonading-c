#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 506相对名次

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

void tr(char *a, long n) // 将数字转换位字符串
{
    int count = 0, temp, flag = 0;
    if (n < 0)
    {
        flag = 1;
        n = -n;
    }
    while (n > 9)
    {
        temp = n % 10;
        n /= 10;
        a[count] = temp + 48;
        count++;
    }
    a[count++] = n + 48;
    if (flag == 1)
    {
        a[count++] = '-';
    }
    a[count] = '\0';
    int t = strlen(a), tt;
    for (int i = 0, j = t - 1; i < t / 2; i++, j--)
    {
        tt = a[i];
        a[i] = a[j];
        a[j] = tt;
    }
}
char **findRelativeRanks(int *score, int scoreSize, int *returnSize)
{
    // char ** r=malloc(scoreSize*(sizeof(char *)));
    // int count=0;
    // char d[13];
    // for(int i=0;i<scoreSize;i++)
    // {
    //     r[i]=malloc(13);
    // }

    // for(int i=0;i<scoreSize;i++)
    // {
    //     count=1;
    //     for(int j=0;j<scoreSize;j++)
    //     {
    //         if(score[j]>score[i])
    //         {
    //             count++;
    //         }
    //     }
    //     if(count==1)
    //     {
    //         strcpy(r[i],"Gold Medal");
    //     }
    //     else if(count==2)
    //     {
    //         strcpy(r[i],"Silver Medal");
    //     }
    //     else if(count==3)
    //     {
    //         strcpy(r[i],"Bronze Medal");
    //     }
    //     else
    //     {
    //         tr(d,count);
    //         strcpy(r[i],d);
    //     }
    // }
    // *returnSize=scoreSize;
    // return r;

    int sort[scoreSize], count = 1;
    char **r = malloc(scoreSize * (sizeof(char *)));
    char d[13];
    for (int i = 0; i < scoreSize; i++)
    {
        r[i] = malloc(13);
    }
    for (int i = 0; i < scoreSize; i++)
    {
        sort[i] = score[i];
    }
    qsort(sort, scoreSize, 4, cmp);
    for (int i = 0; i < scoreSize; i++)
    {
        count = 1;
        for (int j = 0; j < scoreSize; j++)
        {
            if (score[i] == sort[j])
            {
                count += j;
                break;
            }
        }
        if (count == 1)
        {
            strcpy(r[i], "Gold Medal");
        }
        else if (count == 2)
        {
            strcpy(r[i], "Silver Medal");
        }
        else if (count == 3)
        {
            strcpy(r[i], "Bronze Medal");
        }
        else
        {
            tr(d, count);
            strcpy(r[i], d);
        }
    }
    *returnSize = scoreSize;
    return r;
}
int main()
{
    int a[5] = {10, 3, 8, 9, 4};
    int l;
    char **c = findRelativeRanks(a, 5, &l);
    for (int i = 0; i < l; i++)
    {
        printf("%s\n", c[i]);
    }
    system("pause");
    return 0;
}