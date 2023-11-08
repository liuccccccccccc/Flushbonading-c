#include<stdio.h>
#include<stdlib.h>
int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d){//1385
    int a=0,flag;
    for(int i=0;i<arr1Size;i++)
    {
        flag=0;
        for(int j=0;j<arr2Size;j++)
        {
            if(abs(arr1[i]-arr2[j])<=d)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            a++;
        }
    }
    return a;

}
int main()
{
    int a[4]={1,2,3,4},b[4]={6,7,8,9};
    printf("%d\n",findTheDistanceValue(a,4,b,4,3));
    system("pause");
    return 0;
}