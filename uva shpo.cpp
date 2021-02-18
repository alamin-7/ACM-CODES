#include<bits/stdc++.h>
using namespace std;

int main()

{
   long long int t, i, n, sum, k;

    scanf("%lld", &t);

    for(k = 1; k <= t; k++){
            sum = 0;

        scanf("%lld", &n);
        long long int a[n];

        for(i = 0; i < n; i++){
            scanf("%lld", &a[i]);
         }

         sort(a, a + n);

    for(i = n - 3; i >= 0; i -= 3){

        sum = sum + a[i];
       }
    printf("%lld\n", sum);
    }

    return 0;

}

