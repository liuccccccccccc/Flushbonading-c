#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void tr(char *a, long n)//将数字转换位字符串
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
char **summaryRanges(int *nums, int numsSize, int *returnSize)//228.汇总区间
{
    if (numsSize == 0)
    {
        *returnSize = 0;
        char **d = NULL;
        return NULL;
    }
    int count = 0, num = 1;
    int a[20];
    a[count] = nums[0];
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i + 1] != nums[i] + 1)
        {
            count++;
            a[num] = nums[i];
            a[num + 1] = nums[i + 1];
            num += 2;
        }
    }
    a[num] = nums[numsSize - 1];
    *returnSize = count + 1;
    char **t = malloc(sizeof(char *) * (count + 1));
    for (int i = 0; i <= count; i++)
    {
        t[i] = malloc(100);
    }
    int i = 0, j = 0;
    char temp[100];
    while (i <= num)
    {
        if (a[i] != a[i + 1])
        {
            tr(t[j], a[i]);
            strcat(t[j], "->");
            tr(temp, a[i + 1]);
            strcat(t[j], temp);
            //    t[j][0]=48+a[i];
            //    t[j][1]='-';
            //    t[j][2]='>';
            //    t[j][3]=48+a[i+1];
            //    t[j][4]='\0';
        }
        else
        {
            tr(t[j], a[i]);
        }
        i += 2;
        j++;
    }
    return t;
}
int main()
{
    int nums[6] = {0,1,2,4,5,7};
    int co;
    char ** s=summaryRanges(nums,6,&co);
    for(int i=0;i<co;i++)
    {
        printf("%s\n",s[i]);
    }
    system("pause");
    return 0;
}