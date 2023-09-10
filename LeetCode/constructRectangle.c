#include<stdio.h>
#include<stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize){//492.构造矩形
    int *a=malloc(8);
    for(int i=1;i<=area;i++)
    {
        if(area%i==0)
        {
            if(i>area/i)
            {
                break;
            }
            a[0]=area/i;
            a[1]=i;
        }
    }
    *returnSize=2;
    return a;

}
int main()
{
    int a;
    int *b=constructRectangle(88,&a);
    printf("%d %d\n",b[0],b[1]);
    system("pause");
    return 0;
}