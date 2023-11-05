#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
 {
     return *(int *)a-*(int *)b;
 }
int* arrayRankTransform(int* arr, int arrSize, int* returnSize) {//1331.数组序号转换
    int *a =malloc(arrSize*4);
    for(int i=0;i<arrSize;i++)
    {
        a[i]=arr[i];
    }
    qsort(arr,arrSize,4,cmp);
    int co=0;
    for(int i=0;i<arrSize-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[co]=arr[i];
            co++;
        }
    }
    
    arr[co++]=arr[arrSize-1];
    for(int i=0;i<co;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<arrSize;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int le,ri;
    for(int i=0;i<arrSize;i++)
    {
       le=0,ri=co-1;
        while(1)
        {
            if(a[i]==arr[(le+ri)/2])
            {
                a[i]=(le+ri)/2+1;
                break;
            }
            else if(a[i]>arr[(le+ri)/2])
            {
                le=(le+ri)/2+1;
            }
            else
            {
                ri=(le+ri)/2-1;

            }

        }
    }
    *returnSize=arrSize;
    return a;
    
    
}
int main()
{
    int c[11]={1,-11,24,15,26,-31,-50,-49,22,37};
    int l;
    int *a=arrayRankTransform(c,10,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}