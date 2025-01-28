#include<stdio.h>
#include<math.h>

int main()

{
    long long int i, j, n, x, y, count;

    while(scanf("%lld", &n) == 1 && n != 0){
            count = 0;

        for(i = pow(n, .5); i >= 1; i--){
            for(j = 0; j <= i; j++){
                    x = pow(i, 3);
                    y = pow(j, 3);
                    if((x - y) == n)
                       {
                        printf("%lld %lld\n", i, j);
                        count  = 1;
                    }
            }
        }
    if(count == 0)
        printf("No solution\n");
    }
    return 0;
}
