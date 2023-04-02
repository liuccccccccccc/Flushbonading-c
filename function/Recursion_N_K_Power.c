#include <stdio.h>
#include <stdlib.h>
double N_K_Power(int n, int k)
{
    double  temp = n;
    if (k == 0)
    {
        return 1;
    }
    else  if (k > 0)
    {
        for (int i = 1; i < k; i++)
        {
            temp *= n;
        }
        return temp;
    }
    else 
    {
        for(int i = 1;i< -k;i++)
        {
            temp*=n;
        }
        return 1.0/temp;
    }

    
}

int Recursion_N_K_Power(int n, int k)
{
    if (k > 1)
    {
        return n * Recursion_N_K_Power(n, k - 1);
    }
    return n;
}

int main()
{

    int n, k;
    scanf("%d %d", &n, &k);
    printf("%lf\n", N_K_Power(n, k));
    printf("%d\n", Recursion_N_K_Power(n, k));

    system("pause");
    return 0;
}