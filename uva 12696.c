#include<stdio.h>

int main()

{
    double i, t, l, wid, d, weg, count= 0;

    scanf("%lf", &t);

    for(i = 1; i <= t; i++){

        scanf("%lf %lf %lf %lf", &l, &wid, &d, &weg);

        if(((l <= 56 && wid <= 45 && d <= 25)|| (l+wid+d<= 125)) && weg <= 7) {

            printf("1\n");
            count++;
        }
        else
            printf("0\n");
    }

    printf("%.0lf\n", count);

    return 0;
}
