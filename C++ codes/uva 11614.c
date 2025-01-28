#include<stdio.h>

int main()

{
    long long int t, i, j, k, n, a, count;

    scanf("%lld", &t);

    for(i = 1; i <= t; i++){
            count = 0;
            a  = 0;
        scanf("%lld", &n);

        for(j = 1; j <= n; j++){

            for(k = 1; k <=j ;k++){

                     a++;
            }
            if(j == k-1 && a <= n){
                count++;
            }

        }
        printf("%lld\n", count);
    }
    return 0;
}
