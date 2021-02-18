#include<stdio.h>

int main()

{
   long long int n, rem, i, t, j;

   scanf("%lld", &t);

   for(i = 1; i <= t; i++){

    scanf("%lld", &n);

    if(n < 0) break;

    for(j = 1; n > 0; j++){

    rem = n % 3;
     n = n /3;

    printf("%lld", rem);

    }

    printf("\n");

   }

   return 0;
}
