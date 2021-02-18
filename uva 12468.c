#include<stdio.h>

int main()

{
    int a, b, diff1, diff2;

    while(scanf("%d %d", &a, &b) == 2){

       if(a < 0 && b < 0) break;

        if((a == 0 && b == 99) || (a == 99 && b == 0)){

            printf("1\n");


        }
        else{

                if(a == b)

                printf("0\n");


        if(a > b){

            diff1= a - b;

            diff2 = (99 - a) + 1 + b;

            if(diff1 < diff2)

                printf("%d\n", diff1);

                if(diff2 < diff1)

                   printf("%d\n", diff2);

            }

        if(b > a){

            diff1 = b - a;

            diff2 = (99 - b) + 1 + a;

            if(diff1 < diff2)

                printf("%d\n", diff1);


            if(diff2 < diff1)

                printf("%d\n", diff2);

        }
        }
    }

    return 0;
}
