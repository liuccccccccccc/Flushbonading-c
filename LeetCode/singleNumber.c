#include <stdio.h>
#include <stdlib.h>
int singleNumber(int *nums, int numsSize) // 除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
{
    // int sum=0,flag=0;//第一种算法，把出现两次的数+一次然后 -一次，最后所有数的和就是出现一次的那个数
    // for(int i=0;i<numsSize;i++)
    // {
    //     flag=0;
    //     for(int j=0;j<i;j++)
    //     {
    //         if(nums[i]==nums[j])
    //         {
    //             flag=1;break;
    //         }
    //     }
    //     if(flag==1)
    //     {
    //         sum-=nums[i];
    //     }
    //     else
    //     {
    //         sum+=nums[i];
    //     }
    // }
    // return sum;
    int a = 0; // 改进算法用位操作符，异或^ 相同为0不同为1.根据以下性质，可设计出一个简单算法。：1.交换律：a ^ b ^ c <=> a ^ c ^ b  2.任何数于0异或为任何数 0 ^ n => n 3.相同的数异或为0: n ^ n => 0
    for (int i = 0; i < numsSize; i++)
    {
        a ^= nums[i];
    }
    return a;
}
int main()
{
    int a[9] = {1, 2, 3, 1, 2, 3, 5, 5, 9};
    int v = singleNumber(a, 9);
    printf("%d", v);
    system("pause");
    return 0;
}
