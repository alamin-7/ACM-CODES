#include<stdio.h>

#include<math.h>

int main()

{
    double x, y, r, sum, sum1, sum2;

    double long_dis, smallest_dis;

    int i, n;

    scanf("%d", &n);

    for(i =1; i<=n; i++){

        scanf("%lf %lf %lf", &x, &y, &r);

        sum1 = pow (x, 2) ;

        sum2 = pow(y, 2);

        sum = sum1 + sum2 ;

        long_dis = pow (sum, .5) + r;

        smallest_dis = (r * 2) - long_dis;

        printf("%.2lf %.2lf\n", smallest_dis, long_dis );
    }

    return 0;
}
