#include<stdio.h>

int main()

{
    double a, b, c, a_t, sun_f, ross, violet, a_big_c, big_r, small_r, S, s;

    while(scanf("%lf %lf %lf", &a, &b, &c) == 3){

            big_r =(double) (c / 2);

        a_big_c = (double)(3.1416 * big_r * big_r);

        a_t =(double) (.5 * a * b);

        sun_f = (double)(a_big_c - a_t);

        s =(double) ((a + b + c)/ 2);
        small_r =(double) (a_t / s);

        ross =(double) (3.1416 * small_r * small_r);

        violet =(double) (a_t - ross);

        printf("%.4lf %.4lf %.4lf\n ", sun_f, violet, ross);
    }

    return 0;
}
