#include<stdio.h>
#include<stdlib.h>
int findSpecialInteger(int* arr, int arrSize) {//1287
    int l=arrSize/4,c=1;;
    for(int i=0;i<arrSize-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            c++;
        }
        else
        {
            if(c>l)
            {
                return arr[i];
            }
            else
            {
                c=1;
            }
        }
    }
    return arr[arrSize-1];
    
}
int main()
{
    int a[5]={1,2,2,4,5};
    printf("%d\n",findSpecialInteger(a,5));
    system("pause");
    return 0;
}