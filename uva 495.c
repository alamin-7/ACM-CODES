#include<stdio.h>

int main()

{
    long long int a , b, c, n, i;

    while(scanf("%lld", &n) == 1){

            a = 0;

            b = 1;

        for(i= 1; i <= n; i++){

            c = a + b;

            a = b;

            b = c;

        }

        printf("The Fibonacci number for %lld is %lld\n", n, a);
    }

    return 0;
}
