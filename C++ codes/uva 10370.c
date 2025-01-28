#include<stdio.h>

int main()

{
    int t, i, n, count ,sum, j;

    float avg, f_avg;

    scanf("%d",&t);

    for(j = 1 ; j <= t ; j++){

            scanf("%d",&n);

            int num[n];

            sum = 0;

            count = 0;

    for(i = 0 ; i < n ; i++){

        scanf("%d", &num[i]);

        sum+=num[i];
    }

    avg = (sum * 1.0/n);

    for(i = 0 ; i < n ; i++){

        if(num[i]>avg){

            count++;
        }
    }

    f_avg = (count * 100.000)/n;

    printf("%.3lf%%\n",f_avg);

    }

    return 0;


}
