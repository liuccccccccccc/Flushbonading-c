#include<stdio.h>
#include<stdlib.h>
int minCostToMoveChips(int* position, int positionSize){//1217
    int od=0,ev=0;
    for(int i=0;i<positionSize;i++)
    {
        if(position[i]%2==0)
        {
            ev++;
        }
        else
        {
            od++;
        }
    }
    return od<ev?od:ev;
}
int main()
{
    int pos[3]={1,2,3};
    printf("%d\n",minCostToMoveChips(pos,3));
    system("pause");
    return 0;
}