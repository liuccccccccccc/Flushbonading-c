#include<stdio.h>
#include<stdlib.h>
int countTriples(int n) {//1925
    int count=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int z=1;z<=n;z++)
            {
                if(i*i+j*j==z*z)
                {
                    count+=2;
                }
            }
        }
    }
    return count;
    
}
int main()
{
    printf("%d\n",countTriples(10));
    system("pause");
    return 0;
}