#include<stdio.h>

int main()

{
    int i, j, n, count;

    while(scanf("%d", &n) == 1){

        int a[n];
        int a1[n - 1];

        for(i = 0 ; i < n; i++){
                count= 0;

            scanf("%d", &a[i]);
        }
         i = 0;

        for(j = 0; j < n-1; j++){

            if(a[i] > a[i+1]){

            a1[j] = a[i] - a[i+1];
            }

               else if(a[i + 1] > a[i]){
                 a1[j] = a[i + 1] - a[i];
                }

                i++;
        }

        for(j = 0; j < n-1; j++){

            if((a1[j] == (a1[j+1] + 1)) ||(a1[j] == a1[j+1])){
                count++;
            }
        }
        if(count == (n - 2)){
            printf("Jolly\n");
        }

        else{
            printf("Not jolly\n");
        }
    }

    return 0;
}
