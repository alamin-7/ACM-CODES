#include<stdio.h>

int main()
{
    long long int a, b, c, d, e, total_way;

    while(scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e)== 5){
        if(a== 0 && b == 0 && c == 0 && d == 0 && e == 0){
            break;
        }
        else{
           total_way = a * b * c * d * d * e * e;
        }
        printf("%lld\n", total_way);
    }
    return 0;
}

