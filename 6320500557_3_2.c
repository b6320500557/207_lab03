#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,p[48]={0},a=0,max=0,b=0,prime=0;
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        p[a-1] = p[a-1] + b;

        if(max < p[a-1])
        {
            max = p[a-1];
            prime = a;
        }
    }
    printf("%d %d",prime,max);
    return 0;
}
