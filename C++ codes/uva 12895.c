#include<stdio.h>

#include<math.h>

int main()

{
   long long int i, re, n, t, j, a, main_num;

     double d[10000], sum;

    scanf("%lld", &t);

    for(i = 1; i <= t; i++){

            sum = 0;

        scanf("%lld", &n);

        main_num = n;


        for(j = 0; n > 0; j++){

            d[j] = n % 10;

            n = n/10.0;
        }
        a = j;

        for(j = 0; j < a; j++ ){

            sum = sum + pow((d[j]), a);
        }

        if(sum == main_num){

            printf("Armstrong\n");
        }

        else{

            printf("Not Armstrong\n");
        }
    }

    return 0;
}
