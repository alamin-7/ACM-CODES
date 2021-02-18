#include<stdio.h>

int main()


{
    int a, b, i, c = 0;

    while(scanf("%d %d", &a, &b) == 2){
            if( c == 1 ){ printf("\n"); }

        if(a >= b){

            for(i = b; i <= a ; i++){

                b = b + 1;

                printf("%d\n", b);
            }
        }

      else if(b >= a){

            for(i = a; i <= b ; i++){

                a = a + 1;

                printf("%d\n", a);
            }
        }

        c = 1;
    }

    return 0;
}
