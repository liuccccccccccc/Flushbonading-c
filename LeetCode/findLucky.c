#include<stdio.h>
#include<stdlib.h>

int findLucky(int* arr, int arrSize) {//1394
    int va=-1,co=0,gg=0;
    for(int i=0;i<arrSize;i++)
    {
        co=0;
        for(int j=0;j<arrSize;j++)
        {
            if(arr[i]==arr[j])
            {
                if(j<i)
                {
                    break;
                }
                co++;
            }
        }
        if(co==arr[i])
        {
            if(va<co)
            {
                va=co;
            }
        }
    }
    return va;


    
}
int main()
{
    int a[7]={1,2,3,4,4,4,4};
    printf("%d\n",findLucky(a,7));
    system("pause");
    return 0;
}