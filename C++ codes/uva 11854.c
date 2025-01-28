#include<stdio.h>

int main()
{
    double a,b,c,l,m,n;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {

        if(a==0 && b==0 &&  c==0)
            break;

        if(a>b && b>c)
        {
           l=a ,m =b ,n =c;

        }


        if(a>c && c>b)
        {

            l=a ,m =c ,n =b;
        }


        if(b>a && a>c)
        {
             l =b , m = a, n = c;

        }


        if(b>c && c>a)
        {
            l = b ,m = c , n = a;

        }

        if(c>b && b>a)
        {
            l =c , m= b, n =a;

        }

        if(c>a && a>b)
        {
            l = c ,m = a ,n =b;
        }

        if(l*l== m *m + n*n)
            printf("right\n");
        else
            printf("wrong\n");

        }
    return 0;
}
