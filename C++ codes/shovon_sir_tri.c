#include<stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

   /* if((a > 0 && b > 0 && c > 0) && (a + b > c || a + c > b || b + c > a)){

        printf("The triangle is valid");
    }

    else

        printf("The triangle is not valid");*/

        if(a == b && b == c){

            printf("The triangle is Equilateral");
        }

      else if((a == b && a != c) || (b == c && b != a) ||(c == a && c != b)){

              printf("The triangle is Isosceles");
              }

              else {

                printf("The triangle is invalid");
              }

              return 0;
}
