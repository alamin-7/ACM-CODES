#include<stdio.h>
#include<math.h>

int main()
{
    long long int i, n, t, ans;
    scanf("%lld", &t);

    for(i = 1; i <= t; i++){

        scanf("%lld", &n);

        ans = (sqrt(1 + 8 * n) - 1) / 2;
        printf("%lld\n", ans);
    }

    return 0;
}
