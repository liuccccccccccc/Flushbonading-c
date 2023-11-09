#include<stdio.h>
#include<stdlib.h>
int sumOddLengthSubarrays(int* arr, int arrSize){//1588
    int l=1,i=0,sum=0,j;
    while(l<=arrSize)
    {
        i=0;
        while(i+l<=arrSize)
        {
            for(j=i;j<i+l;j++)
            {
                sum+=arr[j];
            }
            i++;
        }
        l+=2;
        
    }
    return sum;

}
int main()
{
    
    int a[6]={1,2,3,4,5,6};
    printf("%d\n",sumOddLengthSubarrays(a,6));
    system("pause");
    return 0;
}