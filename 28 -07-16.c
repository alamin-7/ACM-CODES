//fibonaci problem

#include<stdio.h>

int main()

/*{
    int a = 0, b = 1, c, n, i;

    printf("Enter the number you want to calculate the series:\n ");

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        printf(" %d", a);

        c = a + b;

        a = b;

        b = c;

    }

    return 0;
}*/

/*{
    int x, n, i, j, sum = 1, mul = 1;

    printf("Enter the base number:\n");

    scanf("%d", &x);

    printf("Enter the power number:\n");

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

                mul = mul * x;

                sum = sum + mul;
        }


        printf("Sumation of the series is : %d", sum);
}*/

{
    int row , col1, col2,  a = 1 , b  , row2, col3, n;

    //char ch1= 'A', ch2='E';

    printf("Enter the number:\n");

    scanf("%d", &n);

    b = n - 2;

    for(row = 1; row <= (n/2 + 1); row++){

        for(col1 = n/2; col1 >= row; col1-- ){

            printf(" ");
        }


            for(col2 = 1; col2 <= a ; col2++){


                printf("%d", a);

              //  printf("%c", ch1);
            }

            //ch1++;

            a+=2;

            printf("\n");
        }

        for(row2 = 1; row2 <= n/2; row2++){

            for (col3 = 1; col3 <= row2; col3++){

                printf(" ");
            }

            for(col3 = b; col3 >= 1; col3--){

               // printf("%C", ch2);

               printf("%d", b);
            }

          //  ch2--;

            b-=2;

            printf("\n");
        }
}


/*{
    int row , col;

    for(row = 1; row <=9; row++){

        for(col = 9; col>=1; col-- ){

            if(col % 2 == 0){

                printf("\");
            }

            else{

                printf(" ");
            }

            printf("\n");
        }
    }
}*/

