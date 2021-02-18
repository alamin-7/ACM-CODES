/*#include<stdio.h>
#define M_G 4
#define M_I 3

int main()
{
    int value[M_G][M_I];
    int G_T[M_G], I_T[M_I];
    int i, j, grand_total;

    for(i = 0; i < M_G; i++){
        G_T[i] = 0;
        for(j = 0; j < M_I; j++){
        scanf("%d", &value[i][j]);
        G_T[i] = G_T[i] + value[i][j];
       }
    }
    for(i = 0; i < M_I; i++){
        I_T[i] = 0;
        for(j = 0; j < M_G; j++){
            I_T[i] = I_T[i] + value[j][i];
        }
    }

    grand_total = 0;

    for(i = 0; i < M_G; i++){
        grand_total = grand_total + G_T[i];
    }
    for(i = 0; i < M_G; i++){
        printf("s_g%d = %d\n", i+1, G_T[i]);
    }
    for(i = 0; i < M_I; i++){
        printf("item_%d = %d\n", i+1, I_T[i]);
    }

    printf("%d\n", grand_total);

}*/

/*#include<stdio.h>
#define rows 5
#define columns 5

int main()
{
    int row, column, product[rows][columns];
    int i, j;

    for(j = 1; j <= columns; j++)
        printf("%4d", j);

    printf("\n");

    printf("------------------------------\n");

    for(i = 0; i < rows; i++){
        row = i + 1;
        printf("%2d |", row);
        for(j = 1; j <= columns; j++){
            column = j;

            product[i][j] = row * column;
            printf("%4d", product[i][j]);
        }
        printf("\n");
    }
}*/



