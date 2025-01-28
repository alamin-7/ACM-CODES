#include<stdio.h>

int main()

{
    int n, k, i, sum, a, ans, count;

    while(scanf("%d %d", &n, &k)==2 && k>1){

            sum = 0;

            ans = 0;

            sum = sum+n;

        for(i = 1; sum>=k; i++){

            a = sum/k;

            ans = ans + a ;

            sum = a + (n % k);
        }

        count = ans + n;

        printf("%d\n", count);
    }

    return 0;

}
