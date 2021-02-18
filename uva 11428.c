#include<stdio.h>

int main()
{
    long long int n, i, j, cube_diff;

    while(scanf("%lld", &n) == 1){

        for(i = n, j= n-1; i > 1; i--, j--){

            cube_diff = (i * i * i) - (j * j *j);

            if(n == cube_diff){

                printf("%lld %lld", i, j);
            }
        }

        else
            printf("No solution");
    }

    return 0;
}
