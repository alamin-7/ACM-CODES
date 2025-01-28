#include<stdio.h>

int main()

{
    long long int i, j, n, k, p;

    long long int x, y, t;

    scanf("%lld", &t);

    for(i = 1; i<=t ; i++){

        scanf("%lld %lld %lld", &n, &k, &p);

        if(k+p>n){

        x = (k+p) - n;


        for(j = 1; x>n ; j++){

            x = x - n;
        }

        printf("Case %lld: %lld\n", i, x);

        }

        if(k+p<n){

        x = n - (k+p);


        for(j = 1; x>n ; j++){

            x = x - n;
        }

        printf("Case %lld: %lld\n", i, x);

        }

        if(k+p==n){

            printf("Case %lld: %lld\n", i, n);
        }


    }

    return 0;
}
