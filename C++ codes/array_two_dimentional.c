#include<stdio.h>

int main()


{
    /// Matrix multiplication
    int m, n, o, p, i, j, k, sum;


    printf(" Enter the row and column number of A matrix\n");
    scanf("%d %d", &m, &n);
    printf(" Enter the row and column number of B matrix\n");
    scanf("%d %d", &o, &p);

    int a[m][n], b[o][p], c[m][p];

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < o; i++){
        for(j = 0; j < p; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
                sum = 0;
            for(k = 0; k < o; k++){
                sum = sum + a[i][k] * b[k][j];
            }
             c[i][j] = sum;
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j  < o; j++){
            printf("\t%d", c[i][j]);
          }
          printf("\n");
    }

    /// Addition of two Matrix

    /*int m, n, o, p, i, j, k, sum;


    printf(" Enter the row and column number of A matrix\n");
    scanf("%d %d", &m, &n);
    printf(" Enter the row and column number of B matrix\n");
    scanf("%d %d", &o, &p);

    int a[m][n], b[o][p], c[m][p];

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < o; i++){
        for(j = 0; j < p; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
            sum = a[i][j] + b[i][j];
              c[i][j] = sum;
        }
    }
     for(i = 0; i < m; i++){
        for(j = 0; j  < p; j++){
            printf("\t%d", c[i][j]);
          }
          printf("\n");
    }*/

    return 0;


}
