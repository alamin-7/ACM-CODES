#include<stdio.h>

int main()
{
    long long int t, n, i, num, digit;

    scanf("%lld", &t);

    for(i = 1; i <= t; i++){

        scanf("%lld", &n);

        num = (((((n * 567)/9 + 7492)) * 235) / 47) - 498;

        if(num < 0)

            num = num * (-1);

        num = num / 10;

        digit = num % 10;

        printf("%lld\n", digit);
    }

    return 0;
}
