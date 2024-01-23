#include<stdio.h>
#include<stdlib.h>//2956
#include<string.h>
#include<math.h>
int cc(char *a)
{
    int l=strlen(a),sum=0;
    for(int i=0,j=l-1;i<l;i++,j--)
    {
        sum+=(a[i]-48)*pow(10,j);
    }
    return sum;
}
int maximumValue(char (*strs)[10], int strsSize) {
    int ll=0,flag=0,max=0,num;
    for(int i=0;i<strsSize;i++)
    {
        flag=0;
        ll=strlen(strs[i]);
        for(int j=0;j<ll;j++)
        {
            if(strs[i][j]>57||strs[i][j]<48)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            num=cc(strs[i]);
        }
        else
        {
            num=ll;
        }
        if(num>max)
        {
            max=num;
        }
    }
    return max;
    
}
int main()
{
    char a[3][10]={"3","abcd","1234t"};
    printf("%d\n",maximumValue(a,3));
    system("pause");
    return 0;
}