#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    assert(returnSize && digitsSize); // 方法一：当给的数组长度过长时，会越界，无法得出结果。
    // int sum = 0, pow10 = 0, plusO, count = 1, temp = 0, bit = 0;
    // ;
    // for (int i = 0, j = digitsSize - 1; i < digitsSize; i++, j--)
    // {
    //     pow10 = pow(10, j) + 0.1;
    //     sum += *(digits + i) * pow10;
    // }
    // plusO = sum + 1;
    // temp = plusO;
    // while (plusO >= 10)
    // {
    //     plusO = plusO / 10;
    //     count++;
    // }
    // *returnSize = count;
    // int *plusArr = malloc(count * 4);
    // while (temp >= 10)
    // {
    //     bit = temp % 10;
    //     temp /= 10;
    //     *(plusArr + (count - 1)) = bit;
    //     count--;
    // }
    // *plusArr = temp;
    // return plusArr;
    //方法二：通过研究数组的每一位数来找到新数组
    if (digits[digitsSize - 1] >= 0 && digits[digitsSize - 1] <= 8)//先判断最后一位是否为9，如果不为9直接开辟同等长度数组，最后一个数加1，其他数原样拷贝
    {
        int *returnArr = malloc(digitsSize * 4);
        *returnSize = digitsSize;
        for (int i = 0; i < digitsSize - 1; i++)
        {
            *(returnArr + i) = *(digits + i);
        }
        *(returnArr + digitsSize - 1) = *(digits + digitsSize - 1) + 1;
        return returnArr;
    }
    else//如果最后一位为9那么再判断全部数是否为9
    {
        int flag = 1;
        for (int j = digitsSize - 1; j >= 0; j--)//利用flag来判断数是否全部为9，如果遍历一遍flag的值为1，那么说明flag的值未变，说明数全为1，否则一旦flag变为0，就说明有不为9的数，此时不全为9
        {
            if (digits[j] == 9 && flag == 1)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1)//如果全部数字都为9，那么开辟数组长度加1，，第一位为1其他位补零。
        {
            int *returnArr = malloc((digitsSize + 1) * 4);
            for (int i = 1; i < (digitsSize + 1); i++)
            {
                returnArr[i] = 0;
            }
            returnArr[0] = 1;
            *returnSize = digitsSize + 1;
            return returnArr;
        }
        else//如果不全为9，数组长度就开辟和原来数组一样的长度。
        {
            int *returnArr = malloc(digitsSize * 4);
            int buffer = 1;
            for (int i = digitsSize - 1; i >= 0; i--)//利用buffer来对加1后的数组的每一为的值进行计算
            {
                if (buffer == 1 && digits[i] == 9)
                {
                    buffer = 1;
                    returnArr[i] = 0;
                }
                else
                {
                    returnArr[i]=buffer+digits[i];
                    buffer = 0;

                }
            }
            *returnSize=digitsSize;
            return returnArr;
        }
    }
}
int main()
{
    int a[4] = {9};
    int returnsize = 0;
    int *return1 = plusOne(a, 1, &returnsize);
    for (int i = 0; i < returnsize; i++)
    {
        printf("%d ", return1[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}