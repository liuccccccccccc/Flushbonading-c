#include<stdio.h>
#include<stdlib.h>
int theMaximumAchievableX(int num, int t){//2769
    return num+2*t;

}
int main()
{
    printf("%d\n",theMaximumAchievableX(5,5));
    system("pause");
    return 0;
}