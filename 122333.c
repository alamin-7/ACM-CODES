#include<stdio.h>
int main()
{
    int i,j,x=1,y=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=y;j++)
        {
            printf("%d",j);
            x++;
            y++;
        }
        printf("\n");
    }
    return 0;
}
