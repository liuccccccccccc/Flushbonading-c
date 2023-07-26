#include<stdio.h>
#include<stdlib.h>


int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k){
//     if(numNegOnes+numOnes+numZeros==0)
//     {
//         return 0;
//     }
//    int a[numNegOnes+numOnes+numZeros],sum=0;
//    for(int i=0;i<numOnes;i++)
//    {
//        a[i]=1;
//    }
//    for(int i=numOnes;i<numOnes+numZeros;i++)
//    {
//        a[i]=0;
//    }
//    for(int i=numOnes+numZeros;i<numNegOnes+numOnes+numZeros;i++)
//    {
//        a[i]=-1;
//    }
//    for(int i=0;i<k;i++)
//    {
//        sum+=a[i];
//    }
//    return sum;
return k<=numOnes?k:(k<=(numZeros+numOnes)?numOnes:numOnes-(k-(numZeros+numOnes)));}

int main()
{
    system("pause");
    return 0;
}