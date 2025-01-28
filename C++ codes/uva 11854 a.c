#include<stdio.h>

int main()
{
    double a,b,c;

    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0)

            break;

        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){

            printf("Right\n");
        }
        else

            printf("wrong\nd");
    }
    return 0;
}
