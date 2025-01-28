#include<stdio.h>
int main()
{
    int row,col,x=1;
    for(row=1;row<=4;row++)
    {
        if(row==2)x+=2;
        if(row==3)x+=2;
        if(row==4)x+=2;
        for(col=1;col<=x;col++)
        {
            if(col%2==1){
                printf("*");
            }
            else
                printf("1");
        }

        /*if(row==2)x+=2;
        if(row==4)x+=2;
        if(row==5)x+=2;*/
        printf("\n");

    }
}
