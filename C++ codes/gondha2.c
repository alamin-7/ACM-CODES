
#include<stdio.h>

int main()

{
    int n, a, b, c, d;

    int sum, count, i, j;

    scanf("%d", &n);

    for(i = 1;i<=n; i++){

        scanf("%d %d %d", &a, &b, &c);

        count = 0;

        sum = a + b;

        for(j = 1; sum>=c; j++){

            d = (sum / 2);

            count = count + d;

            sum = d + (a % c);

        }

        Printf("%d", count);
    }

    return 0;
}
