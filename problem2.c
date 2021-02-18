#include<stdio.h>
int main()
{
    int t, n, gets_on[1000], gets_off[1000], sum, max_num, required_seat, i, j;

    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        sum = 0;
        max_num = 0;

        for(j = 1; j < n ; j++){
            scanf("%d %d", &gets_on[j], &gets_off[j]);
        }
        for(j = 1; j < n; j++){
            sum = sum + gets_on[j] - gets_off[j];

            if(sum > max_num){
                max_num = sum;
            }
        }
        printf("Case %d: %d\n", i, max_num);
    }
    return 0;
}
