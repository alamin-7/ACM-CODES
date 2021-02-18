#include<stdio.h>

int main()

{
    int c, d;

    int n, i,t;

    double ans, a,f1,f2,k;

    scanf("%d",&n);
    t=n;

    while(scanf("%d %d",&c,&d)==2)
    {

        f1=(5 * (d -32))/9;

        f2=f1+c;


        printf("Case %d: %.2lf\n",t-n+1,f2);
        n--;
        if(n == 0)
            break;
    }


    return 0;
}

