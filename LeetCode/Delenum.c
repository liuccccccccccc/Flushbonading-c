#include<stdio.h>
#include<stdlib.h>
int removeDuplicates(int* nums, int numsSize){
    int i=0,j=0;
    while(i<numsSize-1-j)
    {
        if(nums[i]==nums[i+1])
        { 
            j++;
            for(int t=i;t<numsSize-1;t++)
            {
                nums[t]=nums[t+1];
            }
           
        }
        else 
        {
            i++;
        }
        
    }
    return numsSize-j;
}
// int t(int *nums, int numsSize)
// {
//     int i = 0, j = 1;

//     while (j < numsSize)
//     {
//         if (nums[i] == nums[j])
//         {
//             j++;
//         }
//         else if (nums[i] != nums[j])
//         {
//             i++;
//             nums[i] = nums[j];
//             j++;
//         }
//     }

//     return i + 1;
// }
int main()
{
    int nums[11]={1,2,2,3,3,5,5,5,5,5,5,5,5,5,5,5};
    int length=removeDuplicates(nums,11);
    for(int i=0;i<length;i++)
    {
        printf("%d ",nums[i]);
    }
    system("pause");
    return 0;
}