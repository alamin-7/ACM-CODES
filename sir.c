#include<stdio.h>
int main()
{
    int i,j,k=2,l=2,m;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++){
        if(i==k&&j==l&&l<5){
                printf(" ");
                l++;
        }
        else
        {
            printf("*");
        }
        }
        if(i==k)  l-=3;
        if(i==k)  k++;
        if(i==4)  k=1;
        printf("\n");

    }
}
