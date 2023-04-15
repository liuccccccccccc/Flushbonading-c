#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 char a[1000];
 int i;
 for(i=0; i<1000; i++)//会一直计算直到等于-128，然后再计算，此时截断后的数据为char类型能够存储下的01111111，为127，然后直到0，长度为128+127=255
 {
 a[i] = -1-i;
 }
 printf("%d",strlen(a));
 return 0;
}