#include<stdio.h>
#include<stdlib.h>//1295
int countnum(int a)
{
    int cou=0;
    while(a>9)
    {
        a/=10;
        cou++;
    }
    cou++;
    return cou;
}
int findNumbers(int* nums, int numsSize){
    int co=0;
    for(int i=0;i<numsSize;i++)
    {
        if(countnum(nums[i])%2==0)
        {
            co++;
        }
    }
    return co;

}
int main()
{
    int a[4]={1,22,3,44};
    printf("%d\n",findNumbers(a,4));
    system("pause");
    return 0;
}