#include<stdio.h>
#include<stdlib.h>
int numWaterBottles(int numBottles, int numExchange) {//1518
    int dr=numBottles,bo=numBottles;
    while(1)
    {
        if(bo>=numExchange)
        {
            dr+=bo/numExchange;
            bo=bo%numExchange+bo/numExchange;
        }
        else
        {
            return dr;
        }
    }
}
int main()
{
    printf("%d\n",numWaterBottles(20,4));
    system("pause");
    return 0;
}