#include <stdio.h>
#include <stdlib.h>
int *intersection(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize)
{
    int *a = malloc(4 * nums1Size); // 给定两个数组 nums1 和 nums2 ，返回 它们的交集 。输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。
    int count = 0, flag = 0, temp = 0;
    for (int i = 0; i < nums1Size; i++)
    {
        for (int j = 0; j < nums2Size; j++)
        {
            if (nums1[i] == nums2[j])
            {
                a[count++] = nums1[i];
                break;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        flag = 0;
        for (int j = i + 1; j < count; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            a[temp++] = a[i];
        }
    }

    *returnSize = temp;
    return a;
}
int main()
{
    int t;
    int a[5] = {1, 2, 3, 4, 4};
    int b[3] = {4, 4, 1};
    int *d = intersection(a, 5, b, 3, &t);
    for (int i = 0; i < t; i++)
    {
        printf("%d ", d[i]);
    }
    system("pause");
    return 0;
}