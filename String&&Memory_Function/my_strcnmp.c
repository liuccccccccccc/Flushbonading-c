#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int MyStrlen1(const char *a) // 实现库函数strlen，
{
    assert(a != NULL);
    int i = 0;
    while (*(a++) != '\0')
    {
        i++;
    }
    return i;
}
int myStrcnmp(const char *a, const char *b, int count)
{
    if (count > MyStrlen1(a) || count > MyStrlen1(b)) // 判断一下，看count是否超出最短字符串长度，如果超出，则遍历到最短字符串的空字符处，就是遍历长度加1个字符
    {
        int i = MyStrlen1(a) <= MyStrlen1(b) ? MyStrlen1(a) : MyStrlen1(b); // 三元表达式，求最短字符串的长度
        count = i + 1;
    }
    for (int i = 0; i < count; i++) // 对前count字符进行遍历，当循环结束，还没有返回值，就返回0,表示前count个相等。
    {
        if (*(a + i) > *(b + i))
        {
            return 1;
        }
        else if (*(a + i) < *(b + i))
        {
            return -1;
        }
    }
    return 0;
}
int main()
{
        char a[100], b[100];
        int c;
        gets(a);
        gets(b);
        scanf("%d", &c);
        printf("%d\n", myStrcnmp(a, b, c));
    system("pause");
    return 0;
}