#include<stdio.h>
#include<stdlib.h>
int minTimeToVisitAllPoints(int (*points)[2], int pointsSize) {//1266
    int sum=0,temp,a,b;
    for(int i=0;i<pointsSize-1;i++)
    {
        a=abs(points[i+1][0]-points[i][0]),b=abs(points[i+1][1]-points[i][1]);
        temp=a>b?a:b;
        sum+=temp;  
    }
    return sum;

    
}
int main()
{
    int a[4][2]={{1,2},{3,4},{6,-10},{1,1}};
    printf("%d\n",minTimeToVisitAllPoints(a,4));
    system("pause");
    return 0;
}