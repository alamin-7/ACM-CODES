#include<stdio.h>

int main()

{
    int t, n, i, j;

    int h_jumps, l_jumps;

    scanf("%d", &t);

    for(i= 1;i <= t; i++){

            h_jumps = 0;

            l_jumps = 0;

            scanf("%d", &n);

        int arr[n];

        for(j = 0; j < n; j++){

            scanf("%d", &arr[j]);
        }

        for(j = 0;j <(n-1); j++){

            if(arr[j]<arr[j+1]){

                h_jumps++;
            }

          else  if(arr[j]>arr[j+1]){

                l_jumps++;
            }
        }

        printf("Case %d: %d %d\n", i, h_jumps, l_jumps);
    }

    return 0;
}
