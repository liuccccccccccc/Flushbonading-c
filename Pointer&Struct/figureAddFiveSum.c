#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int poww(int i,int k)
{
    int sum=1;
    for(int a=1;a<=k;a++)
    {
        sum*=i;

    }
    return sum;

}
 int Sum (int a,int n)//a+aa+aaa+aaaa。。。。。求a的前n项和
 {
    int sum=a;
    int temp=a;
    for(int i=1;i<n;i++)
    {
        sum+=(temp+a*(pow(10,i)+0.1));//pow函数有时是99.99所以加0.1无论是100还是99.99都可以变为整形100.
        temp=temp+a*(pow(10,i)+0.1);
    }
    return sum;
 }
int main()
{
    int a,b;
    scanf("%d" "%d",&a,&b);
    printf("%d\n",Sum(a,b));
    system("pause");
    return 0;
}