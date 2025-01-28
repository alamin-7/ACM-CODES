#include<stdio.h>

#include<math.h>

int main()
{
    int i;

    double area, s, x, a, b, c;

    for(i = 1; i <= 1000; i++){

        scanf("%lf %lf %lf", &a, &b, &c);

        s = (a + b + c)/(2*1.00);

        x = s * (s - a)* (s - b)* (s - c);

        area =  pow(x, .5) ;

        if(area < 0)

            printf("-1\n");


        else

            printf("%.3lf\n", area);

    }

    return 0;
}
