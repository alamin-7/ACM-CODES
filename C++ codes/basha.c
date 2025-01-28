#include<stdio.h>

int main()

{
    int n, i, j;

    printf("Enter a number");

    for(j=1; ; j++){

    scanf("%d",&n);

    for(i=2;i<n;i++){

        if(n%i==1){

            printf("p\n");
        break;
        }
    }

       if(n%i==0){

            printf("n p\n");
        break;
       }
    }
    }

