#include<stdio.h>

int main()

{
    long long int num_p, budget, h, w, i, cost _p_h, j, k;

    for(i = 1; ;i++){

        scanf("%lld %lld %lld %lld", &num_p, &budget, &h, &w);

        int w1[w], cost_p_h[h];

        for(k = 0; k < h ; k++){

            scanf("%d", &cost_p_h);

            for(j = 0; j < w ; j++){

                scanf("%d", w1[j]);
            }
        }

        if(cost_p_h * num_p == budget){

            for(j = 0; j < w; j++){

                if(w1[j] == num_p)

                    break;

                printf("%lld", cost_p_h * num_p);
            }
        }
    }
}
