#include<stdio.h>

int main()

{
    long long int i, j, n, a, main_num, sum, k, t;

    scanf("%lld", &t);

   for(i = 1; i <= t; i++){

        scanf("%lld", &n);

        main_num = n;

        for(j = 1; j <= (n * 2); j++){

                sum = 0;

             while (n > 0){

                a = n % 10;

                n = n / 10;

                sum = sum + a * a;
            }
            n = sum;

            if(n == 1){
                break;
            }
        }

        if( n == 1){
        printf("Case #%lld: %lld is a Happy number.\n", i,main_num);

        }
        else
            printf("Case #%lld: %lld is an Unhappy number.\n", i, main_num);
    }

    return 0;
}
