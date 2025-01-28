#include<stdio.h>
#include<string.h>
int main()
{
    long int k, m, T, i, j, l, n[100000], x, len;
    char ch[1000], text[100000];
    double price;

    scanf("%ld\n", &T);

    for(i = 1; i <= T; i++){
        scanf("%ld\n", &k);

        price = 0;

        for(j = 1; j <= k ;j++){
            scanf("%c %ld\n", &ch[j], &n[j]);
        }
        scanf("%ld\n", &m);

        for(l = 1; l <= m ; l++){
            gets(text);
            len = strlen(text);

            for(j = 0; j < len ; j++){
                for(x = 1; x <= k ; x++){
                    if(ch[x] == text[j])
                        price = price + n[x];
                }
            }
        }
         printf("%.2lf$\n", price/100);
    }

    return 0;

}
