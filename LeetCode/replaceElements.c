#include<stdio.h>
#include<stdlib.h>
int max(int *a,int l)//1299
{
    int max=a[0];
    for(int i=0;i<l;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
int* replaceElements(int* arr, int arrSize, int* returnSize){
    *returnSize=arrSize;
    for(int i=0;i<arrSize;i++)
    {
       
        if(i==arrSize-1)
        {
            arr[i]=-1;
            return arr;
        } 
        if(i==0)
        {
            arr[i]=max(arr+1,arrSize-1);
        }
        else
        {
            if(arr[i]==arr[i-1])
            {
                arr[i]=max(arr+i+1,arrSize-i-1);
            }
            else
            {
                arr[i]=arr[i-1];
            }
        }
    }
    return arr;

}
int main()
{
    int l;
    int a[5]={3,2,100,1,99};
    int *d=replaceElements(a,5,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",d[i]);
    }
    system("pause");
    return 0;
}