#include<stdio.h>
#include<stdlib.h>
int numberOfSteps(int num){//1342
    int co=0;
    while(1)
    {
        if(num==0)
        {
            return co;
        }
        if(num%2==0)
        {
            num/=2;
        }
        else
        {
            num--;
        }
        co++;
    }

}
int main()
{

    printf("%d\n",numberOfSteps(100));
    system("pause");
    return 0;
}