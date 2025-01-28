#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, ara[1000], i, j, minimum, a, b, sum1, sum2, k, t, l;

    scanf("%d", &t);
    for(l = 1; l <= t; l++){
        scanf("%d", &m);
        a = 1;
        n = m;
        ara[0] = 0;
        if(n % 2 != 0){
                     n = (n / 2) + 1;
         }
         else{
         n = n / 2;
         }

        for(j = 1; j <= m; j++){
            scanf("%d", &ara[j]);
        }
        sort(ara, ara+(m + 1));

        while(1){
                    sum1 = 0;
                    sum2 = 0;
                    j = a;

            while(j  <= n){
                sum1 = sum1 + ara[j];
                j++;
            }
            k = n + 1;
            while(k <= m){
                sum2 = sum2 + ara[k];
                k++;
            }

            if(sum1 == sum2){
                minimum = ara[a - 1];
                break;
            }
            a++;
            n++;
        }
        printf("%d\n", minimum);

    }
    return 0;
}
