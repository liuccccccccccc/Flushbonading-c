#include <stdio.h>
#include <stdlib.h>

void reverse(char *a, int k)//使用三次翻转法，来左旋字符串
{
    for (int i = 0, j = k - 1; i < k / 2; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
int main()
{
    char a[100] = "abcdefg";
    int k;
    scanf("%d", &k);
    reverse(a, k);
    reverse(a + k, 7 - k);
    reverse(a, 7);
    printf("%s", a);
    system("pause");
    return 0;
}