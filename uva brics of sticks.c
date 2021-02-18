#include<stdio.h>

int main()

{
    int n, i, j, sum = 0, avg;

    int x, count = 0;

    for(j=1; ; j++){

    scanf("%d",&n);

    int a[n];

    if(n==0){
        break;
    }

    for(i=0;i<n;i++){

   scanf("%d",&a[i]);

   sum+=a[i];

    }

    avg = sum/n;

    for(i=0;i<n;i++){

        if(avg<a[i]){

        x = a[i] - avg;

        count+=x;
        }

    }

    printf("Set #%d\n", j);

    printf("The minimum number of moves is %d.\n", count);

    printf("\n");

    }

    return 0;
}
