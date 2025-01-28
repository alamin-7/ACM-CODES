#include<stdio.h>

int main()

{
    long long int n, i, t;

    scanf("%lld", &t);

    for(i = 1; i <= t; i++){

        scanf("%lld", &n);

        printf("Case #%lld: %lld\n", i, n + n -1);
    }
    return 0;
}
