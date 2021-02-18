#include<stdio.h>

#include<math.h>

#define pi acos(-1)

int main()

{
    double l, r, w;

    int i, n;

    double red_area, green_area, total_area;

    scanf("%d",&n);

    for(i=1;i<=n;i++){

        scanf("%lf",&l);

        r = (l*1)/5.0;

        w =  (l*6)/10.0;

        total_area = l * w;

        red_area = pi * r * r;

        green_area = total_area - red_area;

        printf("%.2lf %.2lf\n",red_area,green_area);
    }

    return 0;
}
