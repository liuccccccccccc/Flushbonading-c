#include<stdio.h>
#include<stdlib.h>


int addDigits(int num){//给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。返回这个结果。
    int temp=0;
    while(num>9)
    {  temp=0;
        while(num>9)
        {
            temp+=num%10;
            num/=10;
        }
        temp+=num;
        num=temp;
    }
    return num;

}

int main()


{
    printf("%d",addDigits(10));
    system("pause");
    return 0;
}