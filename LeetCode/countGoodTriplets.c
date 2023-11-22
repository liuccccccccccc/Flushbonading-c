#include<stdio.h>
#include<stdlib.h>
int countGoodTriplets(int* arr, int arrSize, int a, int b, int c){//1534
    int cou=0;
    for(int i=0;i<arrSize;i++)
    {
        for(int j=i+1;j<arrSize;j++)
        {
            if(abs(arr[i]-arr[j])<=a)
            {
                for(int k=j+1;k<arrSize;k++)
                {
                    if(abs(arr[j]-arr[k])<=b&&abs(arr[i]-arr[k])<=c)
                    {
                        cou++;
                    }
                }
            }
        }

    }
    return cou;

}
int main()
{
    int a[6]={3,0,1,1,9,7};
    printf("%d\n",countGoodTriplets(a,6,7,2,3));
    system("pause");
    return 0;
}