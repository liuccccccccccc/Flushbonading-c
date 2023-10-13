#include<stdio.h>
#include<stdlib.h>//1103
int* distributeCandies(int candies, int num_people, int* returnSize){
    int *a=malloc(num_people*4);
    int left=candies,co=0,t=1;
    for(int i=0;i<num_people;i++)
    {
        a[i]=0;
    }
    while(1)
    {
        if(co==num_people)
        {
            co=0;
        }
        if(left<=t)
        {
            a[co]+=left;
            break;
        }
        a[co]+=t;
        left-=t;
        co++,t++;
    }
    *returnSize=num_people;
    return a;

}
int main()
{

    int l;
    int *a=distributeCandies(60,4,&l);
    for(int i=0;i<4;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}