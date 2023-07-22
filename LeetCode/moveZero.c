#include<stdio.h>
#include<stdlib.h>
void moveZer(int *Arr,int l)
{
    // for(int i=0;i<l-1;i++)//方法1
    // {
    //     for(int j=0;j<l-i-1;j++)
    //     {
    //         if(Arr[j]==0)
    //         {
    //             int temp=Arr[j];
    //             Arr[j]=Arr[j+1];
    //             Arr[j+1]=temp;
    //         }

    //     }
    // }
    //////////////////////////////////////////
//    int i=0,count=0;//方法2
//     while(i<l-count)
//     {
        
//         if(Arr[i]==0)
//         {
//             count++;
//             for(int j=i;j<l-count;j++)
//             {
//                 Arr[j]=Arr[j+1];
//             }
//             Arr[l-count]=0;
//         }
//         if(Arr[i]!=0)
//         {
//             i++;
//         }
//     }
///////////////////////////////
 int c=0;//方法3//直接找非零的元素，然后从第一位开始挨着记录非零元素。遍历后剩下的元素都是零元素
  for(int i=0;i<l;i++)
  {
      if(Arr[i]!=0)
      {
          Arr[c++]=Arr[i];
      }
  }
  for(int j=c;j<l;j++)
  {
      Arr[j]=0;
  }
}
int main()
{
    int a[5]={0,0,0,0,0};
    moveZer(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}