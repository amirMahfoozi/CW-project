#include <stdio.h>
int main()
{
    int bala,paen,n;
    scanf("%d %d %d",&bala,&paen,&n);
    int big = ((n-1)/4)*paen + ((n-1)/4)*bala;
    for(int i = 0;i<(n-1)/4;i++)
    {
        for(int j = 0;j<big-i*bala;j++)
        {
            printf("-");
        }
        printf("*");
        for(int z = 0;z<2*bala*i-1;z++)
        {
            printf("-");
        }
        if(i!=0 && bala != 0)
            printf("*");
        for(int j = 0;j<big-i*bala;j++)
        {
            printf("-");
        }
        printf("\n");
    }
    return 0;
}
