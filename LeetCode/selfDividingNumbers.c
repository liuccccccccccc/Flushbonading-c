#include<stdio.h>
#include<stdlib.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize){//728 自除数
    int *a =malloc((right-left)*4);
    int count=0,flag=0,temp;
    for(int i=left;i<=right;i++)
    {
        temp=i;
        flag=0;
        while(temp>0)
        {
            if(temp%10==0)
            {
                flag=1;
                break;
            }
            if(i%(temp%10)!=0)
            {
                flag=1;
                break;
            }
            temp=temp/10;
        }
        if(flag==0)
        {
            a[count++]=i;
        }
    }
    *returnSize=count;
    return a;

}
int main()

{   int l;
    int *c=selfDividingNumbers(1,22,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",c[i]);
    }
    system("pause");
    return 0;
}