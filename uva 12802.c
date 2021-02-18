#include<stdio.h>

int main()
{
    long long int n, d, reverse_num, remainder, i, count, a, flag;

    while(scanf("%lld", &n) == 1){

            a = n;
            flag = 0;

            reverse_num = 0;

            count = 0;

        for(i = 2; i <= (n/2) + 1; i++){

            if(n % i == 0){
                count++;
                break;
            }
        }

    if(count == 0){

        while(n != 0){

            remainder = n % 10;
            reverse_num = reverse_num * 10 + remainder;
            n = n /10;

        }

        if(a == reverse_num){
            d = a * 2;
            printf("%lld\n", d);
            flag = 1;

        if(flag = 1){
        break;
          }
        }

             if(a != reverse_num){

                 d = a * 2;

                printf("%lld\n", d);
            }

    }

   else{

         d = a * 2;

         printf("%lld\n", d);
        }
    }
    return 0;
}
