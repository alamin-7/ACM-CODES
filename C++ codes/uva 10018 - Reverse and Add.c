#include<stdio.h>

int main()
{
    long long int n, t, i, b, a, count;

    scanf("%lld", &t);

    for(i = 1; i <= t; i++){
        scanf("%lld", &n);
        count = 0;
        a = n;

        while(1){
                b = 0;

        while(n != 0){
            b = b * 10 + n % 10;
            n = n / 10;

        }
        if(b == a)
            break;

        else
            n = a + b;
            a = a + b;
        count++;

        }
        printf("%lld %lld\n", count, b);

            }
        return 0;

}


