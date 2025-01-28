#include<stdio.h>

#include<math.h>

int main()

{
    int n, i, j, a, b;

    for(i = 1; i <= 20000; i++){

        scanf("%d", &n);

        if(n < 0) break;

        if(n == 1) printf("Case %d: 0\n", i);
        else{

        for(j = 0; j <= 15; j++){

            a = pow(2, j);
            b = pow(2, j+1);

            if(n <= b && n>= a){

                printf("Case %d: %d\n", i, j+1);
                break;
            }
          }
        }
    }

    return 0;
}
