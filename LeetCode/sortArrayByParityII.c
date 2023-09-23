#include<stdio.h>
#include<stdlib.h>//922
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize){
     int temp,a;
    for(int i=0;i<numsSize;i++)
    {
        if(i%2==0)
        {
            if(nums[i]%2!=0)
            {
                a=i+1;
                while(1)
                {
                    if(nums[a]%2==0)
                    {
                        break;
                    }
                    a++;
                }
                temp=nums[i];
                nums[i]=nums[a];
                nums[a]=temp;


            }
        }
        else
        {
            if(nums[i]%2==0)
            {
                a=i+1;
                while(1)
                {
                    if(nums[a]%2!=0)
                    {
                        break;
                    }
                    a++;
                }  
                temp=nums[i];
                nums[i]=nums[a];
                nums[a]=temp;
            }
           

        }
    }
    *returnSize=numsSize;
    return nums;

}
int main()
{
    int l;
    int b[4]={4,2,5,7};
    int *a=sortArrayByParityII(b,4,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}