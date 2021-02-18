#include<stdio.h>

int main()

{
    int n, i, j, count1, count2;

   for(i = 1; i <= 75; i++){

        scanf("%d", &n);

   if(n == 0) break;

            count1 = 0, count2= 0;

        int a[n];

        for(j = 0; j < n; j++){

            scanf("%d", &a[j]);
        }

          for(j = 0; j < n; j++){

            if(a[j] > 0){
                count1++;
            }
            else
                count2++;
          }

          printf("Case %d: %d\n", i, count1 - count2);
    }

    return 0;
}
