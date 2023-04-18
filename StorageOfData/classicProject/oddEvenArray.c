#include <stdio.h>
#include <stdlib.h>
void oddEven(int *a, int n)//将数组中的数分开，奇数放在前面偶数放在后面。简单粗暴直接用新的数组存储。
{
    int aa[n], counta = 0, countb = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            aa[countb--] = a[i];
        }
        else
        {
            aa[counta++] = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = aa[i];
    }
}

void bubble(int *a, int n)//使用冒泡的思想
{
    for (int i = 1; i <= n; i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]%2!=1)
            {
             int temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
            }
        }
    }

}

    int main()
    {
        int a[100], i = 0;
        while (1)
        {
            scanf("%d", &a[i]);
            if (a[i] == 00)
            {
                break;
            }
            i++;
        }
        for (int j = 0; j < i; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");

        bubble(a,i);
        // oddEven(a, i);
        for (int j = 0; j < i; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
        system("pause");
        return 0;
    }