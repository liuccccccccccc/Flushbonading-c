#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct stu
{
    char name[10];
    int age;
} Stu;

// 实现库函数qsort，函数的作用是对数组中的数据继续快速排序，传参时需要传入数组首地址，数组长度，以及每个数组元素的字节大小，还有函数指针，自己写的一个对数组中的元素进行比较的函数
// 该库函数排序时，是对回调函数返回值大于0的两个数进行交换，所以默认是升序排列的，可以在自己定义的比较函数中修改返回值的顺序让排序为降序。
// 自己实现qsort库函数，函数的核心排序是通过冒泡排序实现的。但功能是和库函数的功能一样
int cmp_array(const void *a, const void *b) // 比较整形（二维也可以）数组时传入该函数的地址(函数指针)
{
    return *((int *)a) - *((int *)b); // 这样返回数组排序结果会是升序排列，因为排序中的函数是当大于0时交换。颠倒一下就是降序
}

void print(int arr[][5], int sz) // 打印整形数组的函数
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", *(*(arr) + i));
    }
}
int cmp_char(const void *a, const void *b) // 排序字符时传入该函数的地址
{
    return *(char *)b - *(char *)a; // 字符串按ascil降序排列
}

int cmp_struct(const void *a, const void *b) // 在排序结构体数组时，函数指针要传入该函数的地址
{
    return (*(Stu *)a).age - (*(Stu *)b).age; // 对数组的每个结构体变量按照年龄大小升序排列
}
void printstruct(Stu *a, int b)
{
    for (int i = 0; i < b; i++)
    {
        printf("%s,%d", a[i].name, a[i].age);
        printf("\n");
    }
}

int cmp_string(const void *a, const void *b) // 字符串排序
{
    typedef char(*cha)[10];
    return strcmp(*(cha)a, *(cha)b);
}

void ps(char a[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", a[i]);
    }
}
////////////////////////////////////////////////////////////下面是mysqort函数的函数体
void swap(int size, char *cmp1, char *cmp2) // 这个函数的功能是交换两个元素的指，size是一个元素的大小，cmp1和cmp2分别是两个元素的首地址。
// 相当于是把每个单位字节元素值交换了一下。从而达到实现交换元素的值。
{
    for (int i = 0; i < size; i++)
    {
        char temp;
        temp = *(cmp1 + i);
        *(cmp1 + i) = *(cmp2 + i);
        *(cmp2 + i) = temp;
    }
}
void myQsort(void *base, int sz, int size, int (*p)(const void *, const void *))
{
    for (int i = 1; i <= sz - 1; i++) // 确定冒泡排序的趟数为长度-1次
    {
        {
            for (int j = 0; j < sz - i; j++) // 确定冒泡排序每趟需要比较的次数， 每一趟都比上一躺少比较一次。
            {
                if (p((char *)base + j * size, (char *)base + (j + 1) * size) > 0) // 每次传入两个需要比较元素的首地址，然后，强制转换成char *指针，方便通过size来计算下一个元素的首地址
                {
                    swap(size, (char *)base + j * size, (char *)base + (j + 1) * size);
                }
            }
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////上面是myQsor函数的函数体
int main()
{
    int arr[] = {1, 5, 4, 6, 7, 5, 7, 9, 0, 1, 22, 100, 33}; // qsort函数即可对一位数组排序，又可对二维数组排序。
    int arr1[][5] = {{4, 3, 2, 5, 6}, {5, 3, 2, 6, 8}};
    // 二维数组排序时，相当于看在内存上存储的格式，地址是连续的。数组指针，传进去经过void char 等一系列的转化，就成了数组的首地址。
    char a[] = {"qweqwzxcds"};
    int szz = strlen(a);
    printf("%s\n", a);
    myQsort(a, szz, sizeof(a[0]), cmp_char);
    printf("%s", a);

    Stu stu[4] = {{"lier", 90}, {"wansgi", 59}, {"zhangsan", 99}, {"dashuai", 22}};
    printstruct(stu, 4);
    myQsort(stu, 4, sizeof(stu[0]), cmp_struct); // 排序结构体
    printstruct(stu, 4);

    char stirng1[4][10] = {"bdwd", "qweq", "awad", "zzzzq"};
    ps(stirng1, 4);
    myQsort(stirng1, 4, sizeof(stirng1[0]), cmp_string); // 排序字符串
    ps(stirng1, 4);

    int sz = sizeof(arr1) / sizeof(arr1[0][0]);
    print(arr1, sz);
    printf("\n");
    myQsort(arr1, sz, sizeof(arr1[0][0]), cmp_array); // 排序二维数组·;
    print(arr1, sz);
    system("pause");
    return 0;
}