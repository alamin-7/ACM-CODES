#include<stdio.h>

int main()

{
    int a[10], i, n, j;

    scanf("%d",&n);

    for(j=1;j<=n;j++){

        for(i=0;i<10;i++){

            scanf("%d",&a[i]);
        }

        for(i=0;i<10;i++){

            if((a[i]>a[i+1])||(a[i]<a[i+1])){
            }
        }
                printf("ordered\n");

                for(i=0;i<10;i++){

           if((a[i]>a[i+1])&&(a[i]<a[i+1])){

           printf("unordered\n");

           }
                }

    }

    return 0;


}
