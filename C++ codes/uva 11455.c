#include<stdio.h>

int main()

{
    int n, i;

    long long int a, b, c, d;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

        if(a == b && b == c && c == d)
            printf("square\n");

        else if((a == c && b == d)|| (a == b && c == d) || (a == d && b == c))
               printf("rectangle\n");

        else if((a + b + c) > d && (a + b +d) > c && (a + c + d) > b && (b + c + d) > a)
                 printf("quadrangle\n");

        else
            printf("banana\n");
    }

    return 0;
}
