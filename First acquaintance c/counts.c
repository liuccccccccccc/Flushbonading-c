
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void countS() // 求1-1000的水仙花数
{
    int temp = 0, sum = 0, buffer = 0;
    for (int i = 1; i < 1001; i++)
    {
        sum=0;
        temp = i;
        while (temp > 9)
        {
            buffer = temp % 10;
            sum += pow(buffer, 3);
            temp/=10;
        }
        sum+=pow(temp,3);
        if(sum==i)
        {
            printf("%d ",i);
        }

    }
}
int main()
{
    countS();
    system("pause");
    return 0;
}