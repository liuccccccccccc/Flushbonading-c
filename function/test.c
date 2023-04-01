#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=1;
    int next=1,n;
    scanf("%d",&n);
    for( ;next<=n;next++)
    {
        i*=next;
        
    }
    printf("%d\n",i);
    system("pause");
    return 0;
}