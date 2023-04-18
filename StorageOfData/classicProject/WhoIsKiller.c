#include<stdio.h>
#include<stdlib.h>
void Killer()
{
    char killer;
    for(char i='A';i<='D';i++)//找出谁是凶手，四句话有三句话是真的，假设凶手依次为A,B,C,D。当为3时就是凶手
    {
        killer=i;
        if((killer!='A')+(killer=='C')+(killer=='D')+(killer!='D')==3)//四句话有三句话是真的
        {
            printf("%c",killer);
        }
    } 
}
int main()
{
    Killer();
    
    system("pause");
    return 0;

}