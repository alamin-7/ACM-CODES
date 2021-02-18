#include<stdio.h>

int main()
{
    /*int i;

    i = 1;
    while(i <= 10){

        printf("alamin\n");

        i++;
    }*/

    /*int i;

    for(i = 1; ; i++){

    printf("0 1");
    }*/

    /*

    while(1){

        Printf("aaa");
    }*/

    /*int i = 1;

    do{

        printf("alamin\n");

        i++;
    }

    while(i <= 10);*/

       /* int i, d, sum, j, k;

        scanf("%d", &d);

    for(i = 1; i <= d; i++ ){

        for(j = 1 ; j < i; j++){

            for(k = 1 ; k < j ; k++){

                sum = i + j + k;

                if(sum == d)
                    printf("%d + %d + %d = %d\n", k, j, i, sum);

            }
        }
    }*/

    int n, i, count = 0;

    scanf("%d", &n);

    for(i = 1; i <= (n /2) + 1; i++){

        if(n % 2 == 0)
            count++;
        break;
    }
    if(count != 0){
        printf("prime\n");
    }
    else
        printf("non prime\n");



}
