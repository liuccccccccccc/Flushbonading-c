#include<stdio.h>
#include<stdlib.h>
int threeConsecutiveOdds(int* arr, int arrSize) {//1550
    int c=0;
    for(int i=0;i<arrSize;i++)
    {
        if(c==3)
        {
            return 1;
        }
        if(arr[i]%2!=0)
        {
            c++;
        }
        else
        {
            c=0;
        }
    }
    if(c==3)
    {
        return 1;
    }
    return 0;
    
}
int main()
{
    int a[5]={4,6,7,7,7};
    printf("%d\n",threeConsecutiveOdds(a,5));
    system("pause");
    return 0;
}