#include<stdio.h>

int main()

{
    long long int s, b, i, j, t, count, max, ans, k;
    scanf("%lld", &t);

    for(i =1; i <= t; i++){

        scanf("%lld %lld",&s, &b);

        for(j = s; j <= b; j++){
                count = 0;
                max = 0;
            for(k = 1; k <= j; k++){
                if(j % k == 0)
                    count++;
            }
        if(count > max){
            ans = j;
           }
        }

        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", s, b, ans, count);
    }
    return 0;

}
