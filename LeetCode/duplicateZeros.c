#include<stdio.h>
#include<stdlib.h>//1089
void duplicateZeros(int* arr, int arrSize){
    for(int i=0;i<arrSize;i++)
    {
        if(arr[i]==0)
        {
            for(int j=arrSize-1;j>=i+1;j--)
            {
                arr[j]=arr[j-1];
            }
            i++;
        }
    }
}
int main()
{
    int a[5]={1,0,4,9,5};
    duplicateZeros(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;

}