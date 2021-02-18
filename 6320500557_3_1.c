#include <stdio.h>
int main()
{
    int x[5][4],i,j,sum[5]={0},max=0,loca=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&x[i][j]);
            sum[i] =sum[i] + x[i][j];
            if(sum[i] > max)
            {
                max = sum[i];
            }
        }
    }
    for(i=0; i<5; i++)
    {
        if(max == sum[i])
        {
            i++;
            break;
        }
    }
    printf("%d %d",i,max);

    return 0;
}

