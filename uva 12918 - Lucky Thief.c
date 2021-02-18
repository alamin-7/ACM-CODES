#include<stdio.h>

int main()
{
    long long int T, k, r, i, j, sum;

    scanf("%lld", &T);

    for(i = 1; i <= T; i++){
        scanf("%lld %lld", &k, &r);
        sum = 0;
        r = r--;
        while(k--){
                r--;
                sum = sum + r;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
