#include <stdio.h>
#include <stdlib.h>

double jiec(int x)
{  double temp = 1;
    int t=x;
    for (int i = 1; i <= t; i++)
    {

       temp*=i;
    }
    return temp;
}
int climbStairs(int n){
   double si=0,sj=0,sij=0;
    double sum=0;           // 2*i+1*j=N求i和j,i表示满足爬完一次楼梯需要走两节的次数，j表示需要走一节的次数。
    for (int i = 0; i <= n / 2; i++) // 求走两节的次数
    {
        for (int j = 0; j <=n; j++) // 求走一节的次数
        {
            if ((2 * i + 1 * j) == n)
            {
                si=jiec(i);
                sj=jiec(j);
                sij=jiec((i+j));
                sum+=(sij/(si*sj));
            }
        }
    }
     return sum;

}

int main()
{
    int n;
    scanf("%d", &n);
    int num = climbStairs(n);
    printf("%d\n", num);
    system("pause");
    return 0;
}