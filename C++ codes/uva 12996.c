#include<stdio.h>

int main()

{
    int t, l, n, i, j, k, sum, count;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){

            sum = 0;

            count = 0;

        scanf("%d %d", &n, &l);

        int type[n];

        int limit[n];

        for(j = 0; j < n; j++){

            scanf("%d", &type[j]);
        }

        for(j = 0; j < n; j++){

            scanf("%d", &limit[j]);
        }

        for(j  = 0; j < n ;j++){

            if (limit[j] >= type[j])

                count++;

                sum = sum + type[j];

            }

            if(l >= sum && count == n)

                printf("Case %d: Yes\n",i);

            if(l < sum || count != n)

                printf("Case %d: No\n", i);
        }

    return 0;
}
