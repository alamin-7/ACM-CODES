#include<stdio.h>
int main()
{
    long long a,b,c,i,d;

    while(scanf("%lld",&a)==1)
    {
        if(a==0)
            break;
        b=0;
        c=1;
        for(i=1; i<=a; i++)
        {
            d=b+c;
            b=c;
            c=d;
        }
        printf("%lld\n",d);
    }

    return 0;
}
