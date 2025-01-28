#include<stdio.h>
#include<math.h>
#define pi 2*acos(0.0)
int main()
{
    double num_sides,r,area,x;
    while(scanf("%lf %lf", &r, &num_sides) == 2){
            x = (2 * pi)/(double)num_sides;
        area = ((num_sides * r * r)/ 2) * sin (x);
        printf("%.3lf\n",area );
    }
    return 0;
}
