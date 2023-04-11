#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isPalindrome(int x)//求回文数，左右对称的数，例如121，112211.
{
    if(x<0)
    {
        return 0;
    }
    else
    {
        int n1=x,n2=x;
        int count=1;
        while(n1>9)
        {
        n1=n1/10;
        count++;
        }
        int xx=0;
        int c=0;
        while(x>9)
        {
            int a=10;
            c=x%10;
            x=x/10;
            for(int i=1;i<count-1;i++)
            {
                a*=10;
            }
            xx+=a*c;
            count--;
        }
        xx+=x;
        if(xx==n2)
        {
            return 1;
        }
        return 0;

    }
    return 0;

}

int main()
{
    while(1)
    {
    int n;
    scanf("%d",&n);
    if(isPalindrome(n)==1)
    {
        printf("是\n");
    }
    else
    {
        printf("否\n");
    } 
    }
    
    system("pasue");
    return 0;
}
