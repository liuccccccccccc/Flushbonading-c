#include <stdio.h>
#include <stdlib.h>
void Bubble_Sort(int *arr, int lengthArray) // 使用冒泡排序，将数组进行从大到小排序
{
    int i = lengthArray;
    int flag = 0; // 定义一个flag进行优化。实现当数组本来就是有序时，不需要再进行排序的优化。
    for (; i > 1; i--)
    {
        for (int b = 0; b < i - 1; b++) // b-1表示每次内部循环的次数。
        {
            if (arr[b] < arr[b + 1])
            {
                int temp = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = temp;
                flag = 1; // 第一次排序，如果数组是无序的，进入if语句，falg被赋值为1。
            }
        }
        if (flag == 0) // 当数组是有序时，那么就不会进入if语句，flag还是为0,此时不需要再进行排序，直接终止外层循环，输出数组。
        {
            break;
        }
    }
}

int main()
{
    int array[100], count = 0, i = 0;
    printf("请输入数组的元素，输入00表示输入完毕\n");
    while (1)
    {
        scanf("%d", &array[i]);
        if (array[i] == 00)
        {
            break;
        }
        i++;
        count++;
    }
    printf("数组中的元素为：");
    for (int c = 0; c < count; c++)
    {
        printf("%d ", array[c]);
    }
    Bubble_Sort(array, count);
    printf("\n从大到小排序后数组中的元素为：");
    for (int c = 0; c < count; c++)
    {
        printf("%d ", array[c]);
    }
    printf("\n");
    system("pause");
    return 0;
}