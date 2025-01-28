#include<stdio.h>

int main()

{
    int t, n, p ,q, i, j, sum, count;

    scanf("%d", &t);

    for(i = 1 ; i <= t; i++){

            sum = 0;

            count = 0;

        scanf("%d %d %d", &n, &p, &q);

        int a[n];

        for(j = 0; j < n; j++){

            scanf("%d", &a[j]);
        }

        for(j = 0; j < n; j++){

            sum = sum + a[j];

            if(sum <= q){
                count++;
            }

            if(count > p){

                count--;

                break;
            }
        }

        printf("Case %d: %d\n", i, count);

    }

    return 0;
}
