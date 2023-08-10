#include<stdio.h>
#include<stdlib.h>
int isUgly(int n){
    if(n<=0)
    {
        return 0;
    }
  while(1)
  {
      if(n==1)
      {
          return 1;
      }
      if(n%2==0)
      {
          n/=2;

      }
      else if(n%3==0)
      {
          n/=3;
      }
      else if(n%5==0)
      {
          n/=5;

      }
      else
      {
          return 0;
      }
      
  }
   

}
int main()
{
    printf("%d\n",isUgly(14));
    system("pause");
    return 0;
}