#include<stdio.h>

int main()

{
    double a, b, sum, diff;

    scanf("%lf %lf", &a, &b);

    sum = a + b;

    printf("sum %.2lf\n", sum);

    if(a > b){

        diff = a - b;

        printf("difference = %.2lf\n", diff);
    }

    else{

        diff = b - a;

        printf("difference  = %.2lf\n", diff);

    }

    return 0;
}
