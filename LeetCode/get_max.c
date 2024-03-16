#include<stdio.h>
#include<stdlib.h>
typedef struct link
{
    union 
    {
        int len;
        int data;
    };
    struct link *next;
}node ,node_p;

int get_max(int n,int m,int (*a)[m])
{
    int max=1;
    for(int i=1;i<m;i++)
    {
        max*=a[0][i];
    }
    for(int j=1;j<n;j++)
    {
        max*=a[j][0];
    }
    int t;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            t=1;
            for(int k=0;k<m;k++)
            {
                t*=a[i][k];
            }
            for(int l=0;l<n;l++)
            {
                t*=a[l][j];
            }
            t/=a[i][j];
            t/=a[i][j];
            if(max<t)
            {
                max=t;
            }
        }
    }
    return max;
}
int main()
{
    int a[3][5]={3,1,8,5,2,1,3,10,3,3,7,8,5,5,16};
    printf("%d\n",get_max(3,5,a));
    system("pause");
    return 0;
}