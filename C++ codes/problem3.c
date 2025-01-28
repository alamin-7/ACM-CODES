#include<stdio.h>
int main()
{
    int n, t, i, j, k, l, count;

    scanf("%d", &t);

    for(l = 1; l <= t; l++){
        scanf("%d", &n);
        count = 0;

        for(i = 1; i <= n; i++){
            for(j = 1; j <= i; j++){
                for(k = 1; k <= n; k++){
                    if(i + j + k == n){
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
