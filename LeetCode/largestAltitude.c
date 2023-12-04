#include<stdio.h>
#include<stdlib.h>//1732
int largestAltitude(int* gain, int gainSize) {
    int max=0,temp=0;
    for(int i=0;i<gainSize;i++)
    {
        if(max<(temp+gain[i]))
        {
            max=temp+gain[i];
        }
        temp=temp+gain[i];
    }
    return max;
    
}
int main()
{
    int a[5]={1,3,-2,-4,5};
    printf("%d\n",largestAltitude(a,5));
    system("pause");
    return 0;
}