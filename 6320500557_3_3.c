#include <stdio.h>
int main()
{
    int n,k,i,j;
    scanf("%d",&n);
    for(i=0; i<n+1; i++)
    {
        for(j=2; j<n+1; j++)
        {
            if(n%j==0)
            {
                printf("%d",j);
                printf("\n");
                break;
            }
        }
        n = n/j;
        if(n == 1)
            printf("0");
    }
    return 0;
}
