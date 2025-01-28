#include<stdio.h>

int main()
{
    double ara[1000], avg, sum, exchange;
    int n, i;

    while(scanf("%d", &n) == 1 && n != 0){
            sum = 0;
        for(i = 0; i < n; i++){
            scanf("%lf", &ara[i]);
            sum = sum + ara[i];
        }
    avg = sum / n ;
     double exchange1 = 0;
    for(i = 0; i < n; i++){
        if(ara[i] > avg)
            exchange1 = (double)(long) ((ara[i] - avg) * 100)/ 100.00 + exchange1;
        }

    printf("$%.2lf\n", exchange1);
    }
    return 0;

}

