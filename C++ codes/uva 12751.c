#include<stdio.h>

int main()

{
    int n, k, x, t, i, j, sum, l;

   scanf("%d", &t);

   for(i = 1; i <= t; i++){

        sum = 0;

    scanf("%d %d %d", &n, &k, &x);

    for(j = 1; j <= n; j++){

        sum += j;
    }

    for(l = 1 ; l <= k; l++ ){

        sum = sum - x;

        x++;
    }


    printf("Case %d: %d\n", i, sum);

   }

   return 0;
}
