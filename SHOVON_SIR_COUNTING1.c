#include<stdio.h>

int main()

{
    int i, j, count, remainder;

    long long int n;

    for(i= 1; ;i++){

        printf("Enter a decimal number:");

        scanf("%lld", &n);

        count = 0;

        for(j =1;n>0;j++){

            remainder = n % 2;

            if(remainder == 1){

                count++;
            }

           n = n/2;
        }

        printf("The number of 1 is %d\n", count);


    }

    return 0;
}
