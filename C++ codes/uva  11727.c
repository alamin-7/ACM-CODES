#include<stdio.h>

int main ()

{
    int n, i;

    int a, b, c;

    scanf("%d",&n);

        for(i=1;i<=n;i++){

        scanf("%d %d %d", &a, &b, &c);

            if((a<b && b<c) || (c<b && b<a)){

                printf("Case %d: %d\n",i,b);
            }
            else if((b<a && a<c) || (c<a && a<b)){
                printf("Case %d: %d\n",i,a);
            }
            else if((a<c && c<b) || (b<c && c<a)){

                printf("Case %d: %d\n",i,c);
            }
    }

    return 0;
}
