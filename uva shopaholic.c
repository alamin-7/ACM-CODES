#include<stdio.h>

int main()

{
    int t, i, n, sum, temp,j, k;

    scanf("%d", &t);

    for(k = 1; k <= t; k++){
            sum = 0;

        scanf("%d", &n);
        int a[n];

        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
         }

         for(i = 0; i < n - 1; i++){

            for(j = i + 1; j < n ; j++){

                    if(a[i] > a[j]){

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                    }
                }
             }

    for(i = 0; i < n; i += 3){

        sum = sum + a[i];
       }

    printf("%d\n", sum);
    }

    return 0;
}
