
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, i, t, a[1000], sum, j;

    scanf("%lld", &t);

    for(i = 1; i <= t; i++){
            sum = 0;

        scanf("%lld", &n);
        for(j = 0; j < n; j++){
            scanf("%lld", &a[j]);
        }
        sort (a, a + n);

        for(j = n - 1; j > 0; j--){

            sum = sum + abs(a[j ] - a[j - 1]);
        }
       printf("%lld\n", sum);
    }
    return 0;
}
