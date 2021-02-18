#include<stdio.h>

int main()

{
    int i, a, b, sum,n;

    scanf("%d",&n);

    for(i=1;i<=n;i++){

        scanf("%d %d",&a, &b);

        sum= a+b;
        printf("case %d: %d\n",i,sum);
    }

}
