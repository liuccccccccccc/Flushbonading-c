#include<stdio.h>
#include<stdlib.h>
#include<string.h>//520 检测大写字母
int detectCapitalUse(char * word){
    int l=strlen(word);
    if(l==1)
    {
        return 1;
    }
    if(word[0]<=90)
    {
        if(word[1]<=90)
        {
            for(int i=2;i<l;i++)
            {
             if(word[i]>90)
             {
                 return 0;
             }
            }
        }
        else
        {
            for(int i=2;i<l;i++)
            {
                if(word[i]<=90)
                {
                    return 0;
                }
            }
        }


    }
    else
    {
      for(int i=1;i<l;i++)
      {
          if(word[i]<=90)
          {
              return 0;
          }

      }
    }
    return 1;

}
int main()
{
    char a[]="Hello";
    printf("%d\n",detectCapitalUse(a));
    system("pause");
    return 0;
}