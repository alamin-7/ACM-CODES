#include<stdio.h>

int main()
{
    int n, i, j, temp;

     while(scanf("%d", &n) == 1){

            if(n == 0) break;

        int a[n];

        for(i = 0; i < n; i++){

            scanf("%d", &a[i]);
        }


        for(i = 0; i < n; i++)

        printf("%d ", a[i]);
        printf("\n");

     }

    return 0;
}
