#include<stdio.h>

int main()

{
    double t1, t2;

    printf("Enter the value of t1 and t2");

    scanf("%lf %lf", &t1, &t2);

    if(t1<=6.15 && t2>=5.00)

        printf("You should go to Abdhullahapur and then tangail:");


  else if (t1<=8.00 && t2>=7.00)

        printf("You should go to chandra:");


    else
        printf("You should not go to tangail:");

         return 0;
}
