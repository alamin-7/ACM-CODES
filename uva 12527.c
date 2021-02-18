#include<stdio.h>

int main()
{
    int n, m, i, j, digit, c, count, rem, a[1000], b;

    while(scanf("%d %d", &n, &m) == 2){
            count = 0;;

        for(i = n; i <= m; i++){
                c = 0;
                digit = 0;
                b = 0;

            while(i > 0){
                digit++;
                rem = i % 10;
                i = i / 10;

        for(j = b; j < digit; j++){
            a[j] = rem;
        }
        b++;
            }
            for(j = 0; j < digit - 1; j++){
                    if( a[j] = a[j + 1]){
                    c++;
                  }
            }
            if(c != (digit -1)){
                count++;
            }
            i = n++;
        }
    printf("%d\n", count);
    }
    return 0;
}
