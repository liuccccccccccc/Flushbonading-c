#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int maximum69Number (int num){//1323
    int co=0,flag=0,temp=num;
    while(num>9)
    {
        co++;
        if(num%10==6)
        {
            flag=co;        
        }
        num=num/10;
    }
    co++;
    if(num%10==6)
    {
        flag=co;
    }
    if(flag==0)
    {
        return temp;
    }
    num=temp+3*pow(10,(flag-1));
    return num;
}
int main()
{
    printf("%d\n",maximum69Number(6996));
    system("pause");
    return 0;
}