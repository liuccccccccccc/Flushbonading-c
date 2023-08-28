#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int findComplement(int num){
    int a,b,temp=num,sum1=0,sum2=0,count=0;
    while(1)
    {
        b=num&1;
        a=!b;
        
        sum1+=a*pow(2,count);
        sum2+=b*pow(2,count);
        count++;
        num=num>>1;
        if(sum2==temp)
        {
            break;
        }
    }
    return sum1;

}
int main()
{
    int a=findComplement(1);
    printf("%d\n",a);
    system("pause");
    return 0;
}