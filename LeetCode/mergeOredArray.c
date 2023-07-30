#include<stdio.h>
#include<stdlib.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int flag=0;
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<m;j++)
        {
            if(nums2[i]<=nums1[j])
            {
                for(int k=m;k>=j+1;k--)
                {
                    nums1[k]=nums1[k-1];
                }
                nums1[j]=nums2[i];
                m++;
                flag=1;
                break;
            }

        }
        if(flag==0)
        {
            nums1[m]=nums2[i];
            m++;
        }
    }

}
int main()
{
    int a[6]={1,2,3,0,0,0};
    int b[3]={2,5,6};
    merge(a,6,3,b,3,3);
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}