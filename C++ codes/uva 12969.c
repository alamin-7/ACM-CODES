#include<stdio.h>

int main()

{
    long long int a, r, i, j, b, max, c, sum, d, ans, x;
    while(scanf("%lld %lld", &a, &r) == 2){
        b = r * a;
        long long int ara[b];
        max = 0;
        c = 0;
        d = 0;
        x = a;

        for(i = 0; i < b; i++){
            scanf("%lld", &ara[i]);
        }
        while(a--){
                d++;
                sum = 0;
            for(i = c; i < b; i+= x){
                sum = sum + ara[i];
            }
            if(sum >= max){
                max = sum;
                ans = d;
            }
        c++;
        }
        printf("%lld\n", ans);
    }
    return 0;
}

