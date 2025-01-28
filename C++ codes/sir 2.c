#include <stdio.h>

int main()
{
    int row,col,k=2,l;

    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            if((row==k && col==2)||(row==k && col==3)||(row==k && col==4)){
                printf("-");
            }
            else{
                printf("*");
            }
        }

            if(row==k) k++;
            if(k==5) k=1;
        printf("\n");
    }


}
