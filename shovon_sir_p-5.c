#include<stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the coloum number:");

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        for(j = (n-1);j >= i; j--){

            printf("_");
        }

        for(j = i;j >= 1 ; j--){

            printf("%d", j);

        }

        printf("\n");

    }

    return 0;
}
