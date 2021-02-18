#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100], c[100], d[100], e[100], f[100], g[100], h[100], i[100], j[100];
    int ara[1000], t, k, max, z;

    scanf("%d", &t);

    for(z = 1; z <= t; z++){
            max = 0;

        scanf("%s %d", a, &ara[0]);
        scanf("%s %d", b, &ara[1]);
        scanf("%s %d", c, &ara[2]);
        scanf("%s %d", d, &ara[3]);
        scanf("%s %d", e, &ara[4]);
        scanf("%s %d", f, &ara[5]);
        scanf("%s %d", g, &ara[6]);
        scanf("%s %d", h, &ara[7]);
        scanf("%s %d", i, &ara[8]);
        scanf("%s %d", j, &ara[9]);
        for(k = 0; k < 10; k++){
            if(ara[k] > max){
                max = ara[k];
            }
        }
    printf("Case #%d:\n", z);

    for(k = 0; k < 10 ; k++){
       if( max == ara[k]){
            if(k == 0)
            puts(a);
            if(k == 1)
            puts(b);
            if(k == 2)
            puts(c);
            if(k == 3)
            puts(d);
            if(k == 4)
            puts(e);
            if(k == 5)
            puts(f);
            if(k == 6)
            puts(g);
            if(k == 7)
            puts(h);
            if(k == 8)
            puts(i);
            if(k == 9)
            puts(j);
       }
     }
    }
    return 0;
}

