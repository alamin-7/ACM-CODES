#include<stdio.h>
int main()
{
    long long int i, j, n, a[10000], current_sum, global_sum;

    while(scanf("%lld", &n) && n!= 0){

    for(i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    current_sum = 0, global_sum = 0;

    for(j = 0; j < n; j++){
        current_sum = current_sum + a[j];

        if(current_sum < 0){
            current_sum = 0;
        }

        if(current_sum > global_sum){
            global_sum = current_sum;
        }
    }
    if(global_sum <= 0){
        printf("Losing streak.\n");
       }
    else

    printf("The maximum winning streak is %lld.\n", global_sum);
    }
    return 0;
}
