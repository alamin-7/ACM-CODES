#include<stdio.h>

int main()

{
    int n, i, count = 0;

    printf("Enter the number you want check is it prime or not:\n");

    scanf("%d", &n);

    for(i = 2; i<= (n/2) + 1 ;i++){

        if(n % i == 0)
            count++;
    }

    if(count == 0)
        printf("This is a prime number\n");

    else

        printf("This is not a prime number:\n");

    return 0;
}
