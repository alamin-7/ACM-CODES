#include<stdio.h>

int main()
{
    int t, i, ans, n, j;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){

        scanf("%d", &n);

       int a[n];

       for(j = 1; j <= n; j++){

        scanf("%d", &a[j]);
       }

    ans = (n / 2) + 1;

    printf("Case %d: %d\n", i, a[ans]);

    }

    return 0;
}
