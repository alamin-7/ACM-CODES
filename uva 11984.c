#include<stdio.h>

int main()

{
    int c, d;

    int n, i,f1,f2;

    double ans, a;

    scanf("%d",&n);

    for(i=1;i<=n;i++){

        scanf("%d %d",&c,&d);

        f1=((double)(c/5))*9+32;

        f2=(double)(f1+d);

        ans=(((double)(f2-32)/9))*5;

        printf("Case %d: %.2lf\n",i,ans);
    }


    return 0;
}
