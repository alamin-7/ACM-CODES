#include<stdio.h>

int main()

{
   long long int a, b, c;

   int i, t;

    scanf("%d", &t);

    for( i = 1; i <= t; i++){

        scanf("%lld %lld %lld", &a, &b, &c);

        if((a <= 0 || b <= 0 || c<= 0) || ((a + b <= c) || (b + c <= a) || (a + c <= b))){

            printf("Case %d: Invalid\n", i);
        }

        else {

            if(a == b && b == c){

                printf("Case %d: Equilateral\n", i);
            }

             if((a == b && a != c) || (b == c && b != a) || (c == a && c != b)){

                printf("Case %d: Isosceles\n", i);
            }

            if(a != b && b != c && a != c){

                printf("Case %d: Scalene\n", i);
            }

        }
    }

    return 0;
}
