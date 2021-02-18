#include<stdio.h>

int main()
{
    long long int i, n, q, t, j;

    for(t = 1; t < 65; t++){

        scanf("%lld %lld", &n, &q);

        int a[n];
        int aq[q];
        for(i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }
        for(j = 0; j < q; j++){
            scanf("%lld", &aq[j]);
        }

        for(j = 0; j < q; j++){

        for(i = 0; i < n; i++){
              if(a[i] == aq[j]){
                i ++;
              }
              printf("CASE# 1:\n%lld found at %lld", aq[j], i);
           }
        }
    }
    return 0;
}
