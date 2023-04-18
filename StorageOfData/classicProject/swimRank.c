#include <stdio.h>
#include <stdlib.h>

void swimRank()//有五个人，每个人说了两句话，其中每个人都只有一句话是对的。推理出每个人的排名。
{
    int A = 0, B = 0, C = 0;
    int D = 0, E = 0;
    int i=0;
    for (A = 1; A <= 5; A++)
    {
        for (B = 1; B <= 5; B++)
        {
            if (A == B)
            {
                continue;
            }
            for (C = 1; C <= 5; C++)
            {
                if (C == B)
                {
                    continue;
                }
                for (D = 1; D <= 5; D++)
                {
                    if (D == C)
                    {
                        continue;
                    }
                    for (E = 1; E <= 5; E++)
                    {
                        if (E == D)
                        {
                            continue;
                        }
                        if((A+B+C+D+E)==15&&(A*B*C*D*E)==120)
                        {
                            
                             if ((((B == 2 || A == 3)==1) + ((B == 2 && A == 3)==0) + ((B == 2 || E == 4)==1) + ((B == 2 && E == 4)==0) + ((C == 1 || D == 2)==1) + ((C == 1 && D == 2)==0) + ((C == 5 || D == 3)==1) + ((C == 5 && D == 3)==0) + ((E == 4 || A == 1)==1) + ((E == 4 && A == 1)==0)) == 10)
                        {
                            printf("A是%d\nB是%d\nC是%d\nD是%d\nE是%d\n", A, B, C, D, E);//五层循环，找出数不重复，并且排名符合要求的那一组，就是实际的排名
                        }
                        }
                       
                    }
                }
            }
        }
    }
}
int main()
{
    swimRank();
    system("pause");
    return 0;
}