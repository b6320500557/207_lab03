#include <stdio.h>
int main()
{
    int x,p=0,i,j;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
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
            if(i > p)
            {
               p = i;
            }
        }
    }
    printf("%d",p);
    return 0;
}

