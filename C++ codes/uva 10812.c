#include<stdio.h>

int main()

{
   long int s, d, a, b, n, i;

    while(scanf("%ld ", &n) == 1){

            for(i =1;i<=n;i++){

                    scanf("%ld %ld", &s, &d);

        if(d>s || (s - d)%2 != 0){

        printf("impossible\n");
    }

    else{

        a = (s + d)/2;

        b = (s - d)/2;

        printf("%ld %ld\n", a, b);
            }
         }
    }

    return 0;
}
