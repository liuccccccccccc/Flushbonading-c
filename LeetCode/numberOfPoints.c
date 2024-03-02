#include<stdio.h>
#include<stdlib.h>
int numberOfPoints(int (*nums)[2], int numsSize, int* numsColSize){
    int a[101]={0},count=0;
    {
        for(int i=0;i<numsSize;i++)
        {
            for(int j=nums[i][0];j<=nums[i][1];j++)
            {
                if(a[j]==0)
                {
                    count++;
                }
                a[j]++;
            }
        }
    }
    return count;

}
int main()
{
    int a[3][2];
    int l=2;
    printf("%d\n",numberOfPoints(a,3,&l));
    system("pause");
    return 0;
}