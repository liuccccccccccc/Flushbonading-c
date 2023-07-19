#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
float *aveGra(const int (*Arrp)[4], int peo, int sub)
{
    assert(Arrp);
    int sum=0;
    float *Gra = malloc(sizeof(int) * sub);
    {
        for(int i=0;i<sub;i++)
        {
            sum=0;
            for(int j=0;j<peo;j++)
            {
                sum+=Arrp[j][i];
            }
            Gra[i]=sum/5.0;
        }
    }
    return Gra;
}
int main()
{
    
    int arr[5][4] = {{56, 75, 78, 89}, {89, 98, 76, 67}, {88, 99, 77, 66}, {67, 78, 89, 90}};
    float *ave=aveGra(arr,5,4);
    printf("各科平均成绩分别为:\n");
    for(int i=0;i<4;i++)
    {
        printf("%f ",ave[i]);
    }
    system("pause");
    return 0;
}