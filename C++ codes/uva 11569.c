#include<stdio.h>

int main()

{
   long long int num_p, budget, num_h, num_w, i, amount, j, room , cost, count;

    while(scanf("%lld %lld %lld %lld", &num_p, &budget, &num_h, &num_w) == 4){


         for(i = 1; i <= num_h; i++){

            scanf("%lld", &amount);

            for(j = 1; j <= num_w; j++){

                scanf("%lld", &room);

                 count = 0;

                if(room >= num_p){

                    cost = num_p * amount;

                if(cost <= budget)

                    count++;
                  }
                }
            }

            if(count == 0){
                     printf("stay home\n");

            }
            else{
                    printf("%lld\n", cost);
            }

    }

    return 0;
}
