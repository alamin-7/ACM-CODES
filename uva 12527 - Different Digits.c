#include<stdio.h>

int main()

{
    long long int n, m, i, count, flag, j, rem;
    int a, b, c, d, e;

    while(scanf("%lld %lld", &n, &m) == 2){
            count = 0;
            i = n;

        for( ; i <= m; ){
            j = 0;
              while(i > 0){
                  j++;
                  rem = i % 10;
                  i = i / 10;

                  if(j == 1)     a = rem;
                 else if(j == 2) b = rem;
                 else if(j == 3) c = rem;
                 else if(j == 4) d = rem;
                 else if(j == 5) e = rem;
              }
              i =(n++);
              if( a == b || a == c || a == d || a == e || b == c || b == d || b == e || c == d || c == e || d == e){
                flag = 0;
              }
              else{
                count++;
              }

                }
            printf("%lld\n", count);
    }
    return 0;

}
