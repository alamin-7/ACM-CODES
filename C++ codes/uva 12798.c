#include<stdio.h>

int main()

{
    int n, m, i, j, count, count1;

    while(scanf("%d %d", &n, &m) == 2){

            count = 0;
            count1 = 0;

        int g[m];

        for(i = 1; i <= n; i++){
                count = 0;

            for(j = 0; j < m; j++){

                scanf("%d", &g[j]);
            }


            for(j = m -1 ; j>=0; j--){

                if(g[j] >= 1){
                     count++;
                }

                if(count == m)
                    count1++;
             }

        }
          printf("%d\n", count1);

    }

    return 0;
}
