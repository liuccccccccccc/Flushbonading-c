#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)//1207 
{
    return *((int *)a)-*((int *)b);
}
int uniqueOccurrences(int* arr, int arrSize){
    qsort(arr,arrSize,4,cmp);
    int a[arrSize];
    int count=0;
    a[count]=0;
    for(int i=0;i<arrSize-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            a[count]++;
        }
        else
        {
            
            count++;
            a[count]=0;
        }
    }
    qsort(a,count+1,4,cmp);
    for(int i=0;i<count;i++)
    {
        if(a[i]==a[i+1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a[2]={1,2};
    printf("%d",uniqueOccurrences(a,2));
    system("pause");
    return 0;

}