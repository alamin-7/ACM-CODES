/*#include<stdio.h>

int main()

{
    int a, b, x, y;

    scanf("%d %d", &a, &b);

    x = a;

    a = b;

    b = x;

    printf("%d %d",a, b );

}*/

/*#include<stdio.h>

int main()

{
    int a, b, sum = 1;

    while(scanf("%d %d", &a, &b) == 2){

        for(i = 1; i<=b; i++){

            sum = sum*a;
        }

        printf("%d", sum);

    }

    return 0;
}*/

/*#include<stdio.h>

int main()

{
    double a, b, sum, diff;

    scanf("%lf %lf", &a, &b);

    sum = a + b;

    printf("sum %.2lf\n", sum);

    if(a > b){

        diff = a - b;

        printf("difference = %.2lf\n", diff);
    }

    else{

        diff = b - a;

        printf("difference  = %.2lf\n", diff);

    }

    return 0;
}*/


/*#include<stdio.h>

int main()

{
    double a, b;

    scanf("%lf %lf",&a, &b);

    printf("%.3lf %.3lf", a+b, a-b);

    return 0;
}*/

/*#include<stdio.h>

int main()

{
    int n, ans;

    scanf("%d", &n);

    ans = 1+(n%7);

    printf("%d", ans);

    return 0;

}*/
/*#include<stdio.h>
int main()

{
    int b, n, ans;

    scanf("%d %d", &b, &n);

    ans = (b+(n-1)%7)+1;

    printf("%d", ans);


}*/
/*#include<stdio.h>

int main()

{
    int a, b, n, ans;

    scanf("%d %d %d", &a, &b, &n);

    ans = 1+(n + (b-1))%a;

    printf("%d", ans);
}*/

/*#include<stdio.h>

int main()

{
   long long int x, b, sum = 1,y = 1, i;

    scanf("%lld %lld", &x, &b);

    for(i=1;i<=b;i++){

         y = y * x;

         sum = sum + y;
    }

    printf("%lld", sum);

    return 0;
}*/

/*#include<stdio.h>

int main()

{
    int d1, m1, y1,  d2, m2, y2, d3, m3, y3 ;

    scanf("%d %d %d %d %d %d", &d1, &m1, &y1, &d2, &m2, &y2);

    if(d1>d2 && m1>m2){

        d3 = d1 - d2;

        m3 = m1 - m2;

        y3 = y1 - y2;
    }

    if(d1<d2 && m1>m2){

        d3 = (d1 + 30) - d2;

        m3 = m1 - m2 +1;

        y3 = y1 -y2;
    }

    if(d1>d2 && m1<m2){

        d3 = d1 - d2;

        m3 =(m1+ 12) - m2;

        y3 = y1 -( y2 + 1);

    }

    if(d1<d2 && m1<m2){

        d3 =( d1+30)-d2;

        m3 = (m1+12) - (m2+1);

        y3 = y1-(y2+1);
    }

    printf("%d - %d - %d", d3, m3, y3);

    return 0;




}*/

#include<stdio.h>

int main()

{
    int d1, m1, y1, d2, m2, y2, d, m, y;

    scanf("%d%d%d%d%d%d", &d1, &m1, &y1, &d2, &m2, &y2);

    d = d1 - d2;

    if(d<0) d+=30, m1--;

    m = m1 - m2;

    if(m<0) m+=12, y--;

    y = y1 - y2;

    printf("%d - %d - %d", d, m, y);

    return 0;

}
