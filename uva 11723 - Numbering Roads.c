#include<stdio.h>

int main()

{
    long long int i, r, n, ans;

    for(i = 1; i <= 10002; i++){

        scanf("%lld %lld", &r, &n);

        if(r == 0 && n == 0) break;

        if(r > 27 * n){
            printf("Case %lld: impossible\n", i);
        }

        else{

             ans  = r / n;

             if(r % n == 0) ans--;

             printf("Case %lld: %lld\n", i, ans);
        }
    }

    return 0;
}
