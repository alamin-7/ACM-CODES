#include<stdio.h>

int main()

{
    long long int  mul;

    int n, i;

    while(scanf("%d", &n) == 1){

            if(n >= 13){

                printf("Overflow!\n");
            }

          else  if(n <= 7){

                printf("Underflow!\n");

            }

            else{

                    mul = 1;

                    for(i = 1; i<=n; i++){

                        mul = mul * i;
                    }

                    printf("%lld\n", mul);

                  }


            }

            return 0;
}


