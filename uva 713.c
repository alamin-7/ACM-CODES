#include<stdio.h>

int main()
{
    long long int re_num1, re_num2, sum, i, t, n, m, rem1,rem2, sum_re, rem3;

    scanf("%lld", &t);

    for(i = 1; i <= t; i++){
            re_num1 = 0;
            re_num2 = 0;
            sum_re = 0;
        scanf("%lld %lld",&n, &m);
        while(n != 0){

            rem1 = n % 10;
            re_num1 = re_num1 * 10 + rem1;
            n = n /10;
        }
        while(m != 0){
            rem2 = m % 10;
            re_num2 = re_num2 * 10 + rem2;
            m = m /10;
        }

        sum = re_num1 + re_num2;

        while(sum != 0){
            rem3 = sum % 10;
            sum_re = sum_re * 10 + rem3;
            sum = sum / 10;
        }

        printf("%lld\n", sum_re);
    }
    return 0;
}
