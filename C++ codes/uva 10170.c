#include<stdio.h>

int main()
{
    long i, s_num, d, sum ;

    while(scanf("%ld %ld", &s_num, &d) == 2){

        sum = 0;

        for(i = s_num; ;i++){

            sum = sum + i;

            if(sum == d || sum > d){

                printf("%ld\n", i);

                break;
            }
        }
    }

    return 0;
}
