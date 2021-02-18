#include<stdio.h>

int main()
{
    long long int n, num_sq;

    while(scanf("%lld", &n) == 1){

            if(n == 0)

            break;

        num_sq = n * (n + 1) * ((2 * n) + 1) / 6;

        printf("%lld\n", num_sq);
    }

    return 0;
}
