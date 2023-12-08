#include<stdio.h>
#include<stdlib.h>
int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime) {//1450
    int con=0;
    for(int i=0;i<startTimeSize;i++)
    {
       if(queryTime>=startTime[i]&&queryTime<=endTime[i])
       {
           con++;
       }
    }
    return con;
    
}
int main()
{
    int a[3]={1,2,3},b[3]={4,5,6},q=5;
    printf("%d\n",busyStudent(a,3,b,3,q));
    system("pause");
    return 0;
}