#include<stdio.h>

int main()

{
    int n,i;

    long long int a, b;

    scanf("%d",&n);

    if(n<15){

            for(i=1;i<=n;i++){

        scanf("%lld %lld", &a, &b);

        if(a<b){

            printf("<\n");
        }
        else if(a>b){

            printf(">\n");
        }
        else
            printf("=\n");

       }
   }
   return 0;
}
