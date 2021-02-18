
#include<stdio.h>

int main()

{
    long long int n, ans;

     while(scanf("%lld", &n)){

        if(n == 0) break;

        if(n <= 100){

            ans = 91;

            printf("f91(%lld) = %lld\n", n, ans);
        }

        if(n >= 101){

            ans = n - 10;

            printf("f91(%lld) = %lld\n", n, ans);
        }
    }

    return 0;
}
