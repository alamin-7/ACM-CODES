#include<stdio.h>

int main()

{
     int x, n, sum = 1, i, j, mul;

     printf("Enter the base number:\n");

     scanf("%d", &x);

     printf("Enter the nth power number:\n");

     scanf("%d", &n);

     for(i = 1; i <= n; i++){

        for(j = 1; j <= i; j++){

                mul = 1;

            mul = mul * x;

            sum = sum + mul;
        }

           printf("%d", sum);
     }


}
