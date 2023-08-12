#include <stdio.h>
#include <stdlib.h>
int missingNumber(int *nums, int numsSize)
{//给定一个包含 [0, n] 中 n 个数的数组 nums ，找出 [0, n] 这个范围内没有出现在数组中的那个数。

 
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum += i;
        sum -= nums[i];
    }

    return sum + numsSize;
}
int main()
{
    int a[5] = {1, 2, 3, 0, 5};
    printf("%d\n", missingNumber(a, 5));
    system("pause");
    return 0;
}