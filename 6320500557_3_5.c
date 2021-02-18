#include <stdio.h>
int main()
{
    int n,i,j,sum;
    scanf ("%d",&n);
    for(i=0; i<=n; i++)
    {
        for(j=2; j<=i; j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(i==j)
        {
            sum ++;
        }
    }
     if (sum>3 || sum<3)
    {
            printf ("%d is not a Lucky Number.",n);
    }
        else
    {
             printf ("%d is a Lucky Number",n);
    }
    return 0;
}

