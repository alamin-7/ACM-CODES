#include<stdio.h>

int main()

{
    //  1- 100 number of prime number
  /*  int i, j, check;

    for(i = 2; i <= 100; i++){

            check = 0;

        for(j = 2; j <=i/2; j++){

            if(i % j == 0){

                    check = 1;

            break;
            }

        }

        if(check == 0){

            printf("%d\n", i);
        }
    }

    return 0;*/

    //    x - y prime print && summation

   long long int x, y, i, j, check, sum = 0;

    scanf("%lld %lld", &x, &y);

    for(i = x; i <= y; i++){

        check = 0;

        for(j = 2; j <= i/2; j++){

            if(i % j == 0){

                check = 1;

                break;
            }
        }

        if(check == 0){

            printf("%lld\n", i);

            sum = sum +i;
        }
    }

        printf("Sum = %lld", sum);

    return 0;
}
