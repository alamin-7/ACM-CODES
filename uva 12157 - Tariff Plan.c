#include<stdio.h>

int main()

{
    int sum1, sum2, i, t, j, n, a[20], k, x, y;
    scanf("%d", &t);

    for(k = 1; k <= t; k++){
            sum1 = 0;
            sum2 = 0;

        scanf("%d", &n);
        x = n;

        for(j = 0 ; j < n; j++){

            scanf("%d", &a[j]);
        }

        while(j > 0){

            n = a[j - 1];
            while( n >= 0){

                sum1 = sum1 + 10;
                n = n - 30;
            }
            j--;
        }

        while(j < x){
            y = a[j];
            while(y >= 0){

                sum2 = sum2 + 15;
                y = y - 60;
            }
            j++;
        }

        if(sum1 < sum2){
            printf("Case %d: Mile %d\n", k, sum1);
        }
        else if(sum2 < sum1){
            printf("Case %d: Juice %d\n", k, sum2);
        }
        else
            printf("Case %d: Mile Juice %d\n", k, sum1);
    }
    return 0;

}
