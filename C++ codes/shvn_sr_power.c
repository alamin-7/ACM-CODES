#include<stdio.h>

#include<math.h>

int main()

{
    long long int i, sum = 0;

    long long int x = 10e15;

    for(i = 1;i <= x; i++){

        if(i % 7 == 0){

            sum = sum + i;

            printf("%lld\n", sum);

        }
    }

    return 0;
}
