#include<stdio.h>

int main()

{
    int n, i, count, temp, j;

    while(scanf("%d", &n) == 1 && n!= 0){

            count = 0;

        int a[n];

        for(i = 0; i < n; i++){

            scanf("%d", &a[i]);
        }
        for(i = 0; i < n - 1; i++){

        for(j = i + 1; j < n; j++){

            if(a[i] > a[j]){

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
               }
            }
        }

            for(i = 0 ; i < (n - 1); i++){

                if(a[i + 1] - a[i] <= 200){

                    count++;
                }
            }

                if((1422 - (a[n -1])) * 2 <= 200)
                    count++;

      if(count == n ){
        printf("POSSIBLE\n");
      }
      else
        printf("IMPOSSIBLE\n");
    }

    return 0;
}
