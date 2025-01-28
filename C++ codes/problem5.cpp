#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t, i, n, mn, mx, j;
    double ans;
    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        int ara[n];
        mn = 10000000;
        mx = 0;

        for(j = 1; j <= n; j++){
                scanf("%d", &ara[j]);
        if(ara[j] >= mx)
            mx = ara[j];


        if(ara[j] <= mn)
            mn = ara[j];

        ans = mx / (mn * 1.00);

        printf("Case %d: %.2lf\n", j, ans);
        }
    }
    return 0;
}
