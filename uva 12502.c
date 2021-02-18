#include<stdio.h>

int main()
{
    int n, i;

    double a, x, y, z, ans;

    scanf("%d", &n);

    for(i= 1; i <= n ;i++){

        scanf("%lf %lf %lf", &x, &y, &z);

        a = (z / (x + y));

        ans = x * a + (x - y) * a;

        printf("%.0lf\n", ans);


        }

    return 0;
}
