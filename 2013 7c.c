#include<stdio.h>
int main()
{
    int row,col;
    for(row=1;row<6;row++)
    {
        for(col=1;col<row;col++)
        {
            printf("_");
        }
        for(col=6;col>row;col--)
        {
          printf("A");
        }
        printf("\n");
    }
    return 0;
}
