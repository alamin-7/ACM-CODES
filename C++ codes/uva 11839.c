#include<stdio.h>

int main()
{
    int n, i, a[100], count, b, j;
    while(scanf("%d", &n) == 1 && n != 0){

        for(i = 1; i <= n ; i++){

                count = 0;

            for(j = 0; j < 5; j++ ){

                scanf("%d", &a[j]);
            }

            for(j = 0; j < 5 ; j++){
                if(a[j] <= 127){
                    count++;
                    b = j;
                }
            }
    if(count == 1){
        if(b == 0)
        printf("A\n");

       else if(b == 1)
        printf("B\n");

        else if(b == 2)
        printf("C\n");

        else if(b == 3)
        printf("D\n");

       else if(b == 4)
        printf("E\n");

    }
    else

        printf("*\n");

        }
    }

    return 0;
}

