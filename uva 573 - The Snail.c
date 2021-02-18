#include<stdio.h>

int main()
{
    double h, u, d, f, i, flag;
    double fatg, distance_climed, total_climed, k;

    while(scanf("%d %d %d %d", &h, &u, &d, &f) == 4){
        if(h == 0){
                break;
        }
        k = (double) (u);
        fatg = (f / 100 * 1.00) * u;
        printf("%.3lf\n", fatg);
        total_climed = 0;

        for(i = 1; ; i++){
            if(i != 1){
                u = (u - fatg)* 1.00;
            }

            total_climed = total_climed + u - d;

            if(total_climed >= h){
                break;
            }
            if(total_climed < 0){
                    flag = 0;
                break;
            }
        }
        printf("%.3lf\n", total_climed);
        if(flag = 0)
            printf("failure on day %d\n", i);
        else
            printf("success on day %d\n", i);
    }
    return 0;
}


