#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int numJewelsInStones(char * jewels, char * stones){//771.宝石和石头
    int count=0;
    for(int i=0;i<strlen(jewels);i++)
    {
        for(int j=0;j<strlen(stones);j++)
        {
            if(jewels[i]==stones[j])
            {
                count++;
            }
        }
    }
    return count;

}
int main()
{
    char je[10]="aA",st[10]="aAAAbb";
    printf("%d\n",numJewelsInStones(je,st));
    system("pause");
    return 0;
}