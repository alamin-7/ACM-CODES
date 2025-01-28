#include<stdio.h>
int main()
{
    int n, m, ara[1000], i, j, sum, minimum_coin, a, b;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d", &m);
        sum = 0;

        for(j = 0; j < m; j++){
            scanf("%d", &ara[j]);
            sum = sum + ara[j];
        }
        a = sum / 2;
        b = a  * 2;
        minimum_coin = sum - b;

        printf("%d\n", minimum_coin);
    }
    return 0;
}
