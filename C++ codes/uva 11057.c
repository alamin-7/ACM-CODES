#include<stdio.h>

int main()

{
    int n, budget, i;

    while(scanf("%d", &n)!= EOF){

        int b[n];

        for(i = 0; i<n ; i++){

            scanf("%d", &b[i]);
        }

        scanf("%d", &budget);

        for(i = 0; i<=n ;i++){

            b[i] + b[i+1];

            if(b[i] + b[i+1]==budget)

                printf("p");
        }


    }
}
