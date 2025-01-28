#include<stdio.h>

int main()

{
    int  t, i, n, j, max;

    scanf("%d", &t);

    for(i =1; i <= t; i++){

            max = 0;

        scanf("%d",&n);

        int arr[n];

        for(j = 1; j <=n; j++){

            scanf("%d", &arr[j-1]);
        }

        for(j = 0; j < n; j++){

        if(arr[j] > max){

            max = arr[j];
        }


        }

        printf("Case %d: %d\n", i, max);

    }

    return 0;
}
