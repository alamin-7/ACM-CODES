#include<stdio.h>

int main()

{
    int n, j, count, i, m;

    long long int w;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

            scanf("%d %d", &m, &w);

            count = 0;

        int a[m];

        for(j = 0; j < m; j++){

            scanf("%d", &a[j]);
        }

        for(j = 0; j < m; j++){

            if(a[j] < w){

                if(a[j] + a[j+1])
            }

                count++;
        }

        printf("%d\n", count);
    }

    return 0;
}
